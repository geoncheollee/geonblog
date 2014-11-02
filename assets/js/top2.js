<script language=javascript>
<!--
if (isNS4) {
        var divMenu = document["divMenu"];
        divMenu.top = windows.pageYOffset + 405;
        divMenu.visibility = "visible";
        moveRightEdge();
} else if (isDOM) {
        var divMenu = getRef('divMenu');
             divMenu.style.top = (isNS ? window.pageYOffset +405 : document.body.clientHeight + document.body.scrollTop - 45 );
        if(!isNS) {
                if( divMenu.style.top > document.body.scrollHeight - 250 ) divMenu.style.top = document.body.scrollHeight - 235;
                if( divMenu.style.top < 65 ) divMenu.style.top = 65;
        }
                        
        divMenu.style.visibility = "visible";
        moveRightEdge();
}
//-->
</script> <!--TOP버튼 끝-->
