#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <mysql.h>
#include <string.h>
#include <stdio.h>

#define DB_HOST "127.0.0.1"
#define DB_USER "root"
#define DB_PASS "1111"
#define DB_NAME "DB_test"

void error_handling( char * message )	{
	fputs( message, stderr );
	fputc( '\n', stderr );
	exit(1);
}

int main(int argc, char **argv)	{
	int serv_sock;
	int clnt_sock;
	struct sockaddr_in serv_addr;
	struct sockaddr_in clnt_addr;
	int clnt_addr_size;

	char ID[12];
	char name[25];
	char message[100];
	char result[20] = "Transmit Success";

	// DB
	MYSQL			*connection = NULL, conn;
	MYSQL_RES		*sql_result;
	MYSQL_ROW		sql_row;

	int query_stat;
	char query[255];

	if(argc != 2)	{
		printf( "Usage : %s <port>\n", argv[0] );
		exit(1);
	}

	serv_sock = socket( PF_INET, SOCK_STREAM, 0 );
	if( serv_sock == -1 )	{
		error_handling("socket() error");
	}

	memset( &serv_addr, 0, sizeof(serv_addr) );
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	serv_addr.sin_port = htons( atoi (argv[1] ) );

	if( bind( serv_sock, (struct sockaddr*) &serv_addr, sizeof(serv_addr)) == -1 )
		error_handling( "bind() error" );

	if( listen( serv_sock, 5 ) == -1 )
		error_handling( "listen() error" );

	clnt_addr_size = sizeof(clnt_addr);
	clnt_sock = accept( serv_sock, (struct sockaddr*) &clnt_addr, &clnt_addr_size );
	if(clnt_sock == -1)
		error_handling("accept() error");

	read( clnt_sock, &ID, sizeof(ID) );
	read( clnt_sock, &name, sizeof(name) );
	read( clnt_sock, &message, sizeof(message) );

	write( clnt_sock, result, sizeof(result) );

	close(clnt_sock);

	//printf("\n\nID : %s, name : %s, message : %s\n\n", ID, name, message);

	//DB
	mysql_init( &conn );
	connection = mysql_real_connect( &conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char *)NULL, 0 );

	if( connection == NULL )	{
		fprintf( stderr, "MySQL Connection Error : %s", mysql_error(&conn) );
		return 1;
	}

	query_stat = mysql_query( connection, "select * from member" );

	if( query_stat != 0 )	{
		fprintf( stderr, "MySQL Query Error : %s", mysql_error(&conn) );
		return 1;
	}

	sql_result = mysql_store_result( connection );
	printf( "%+11s \t%-30s \t%-10s\n", "ID", "name", "message" );

	while( (sql_row = mysql_fetch_row( sql_result ) ) != NULL )	{
		printf( "%+11s \t%-30s \t%-10s\n", sql_row[0], sql_row[1], sql_row[2] );
	}

	mysql_free_result( sql_result );

	sprintf( query, "insert into member values('%s', '%s', '%s')", ID, name, message );

	query_stat = mysql_query( connection, query );

	if( query_stat != 0 )	{
		fprintf( stderr, "MySQL Query Error : %s", mysql_error(&conn) );
		return 1;
	}

	mysql_close( connection );
	return 0;

}
