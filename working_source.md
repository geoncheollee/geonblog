---
layout: page
permalink: /working_source/
title: 수치 자료형과 연산자
description: "수치 자료형과 연산자 소개 및 예제"
tags: [Jekyll, theme, install, setup]
image:
  <!--feature: abstract-11.jpg
  credit: dargadgetz
  creditlink: http://www.dargadgetz.com/ios-7-abstract-wallpaper-pack-for-iphone-5-and-ipod-touch-retina/-->
share: true
---

<!-- 댓글 기능 -->
<html>
<body>
<a href="http://foo.com/bar.html#disqus_thread">Link</a>.

    <div id="disqus_thread"></div>
    <script type="text/javascript">
        var disqus_shortname = 'slhblog';
        (function() {
            var dsq = document.createElement('script'); dsq.type = 'text/javascript'; dsq.async = true;
            dsq.src = '//' + disqus_shortname + '.disqus.com/embed.js';
            (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(dsq);
        })();
    </script>
    <noscript>Please enable JavaScript to view the <a href="http://disqus.com/?ref_noscript">comments powered by Disqus.</a></noscript>

</body>
</html>

<!-- 이미지 기능 -->
<figure>
	<a href="http://farm9.staticflickr.com/8426/7758832526_cc8f681e48_b.jpg"><img src="http://farm9.staticflickr.com/8426/7758832526_cc8f681e48_c.jpg" alt=""></a>
	<figcaption><a href="http://www.flickr.com/photos/80901381@N04/7758832526/" title="Morning Fog Emerging From Trees by A Guy Taking Pictures, on Flickr">Morning Fog Emerging From Trees by A Guy Taking Pictures, on Flickr</a>.</figcaption>
</figure>

<!-- 동영상 기능 -->
<iframe width="560" height="315" src="//www.youtube.com/embed/SU3kYxJmWuQ" frameborder="0"> </iframe>

<!-- 코드입력부 기능 -->
{% highlight html linenos %}
{% raw %}
def add(a,b):
  return a+b
  
print add(1,2)
{% endraw %}
{% endhighlight %}


<!-- 코드 출력부 기능 -->
{% highlight html %}
<iframe width="560" height="315" src="//www.youtube.com/embed/SU3kYxJmWuQ" frameborder="0"> </iframe>
{% endhighlight %}

<!-- 파이썬 코드 실행기  -->
<html>
<body>
    <h2>파이썬 연습하기</h2>

    <p>파이썬 코드를 입력 후 RUN 버튼을 누르세요.</p>

    <iframe src="https://trinket.io/embed/python/538012d3a6554c7945027aab" width="100%" height="356" frameborder="0" marginwidth="0" marginheight="0" allowfullscreen> </iframe>
</body>
</html>

<html>
<head>
<SCRIPT> 
function func(){
 //checkbox_num=관심분야 체크박스 개수
 //sex=성별정보, age=나이정보, job=직업정보, info=관심분야 정보, user_info=나이, 성별, 직업, 관심분야 통합 정도
 
 var chk=document.fm.chk;
 
 for(i=0;i<chk.length;i++){
  if(chk[i].checked==true){
   if (i == 2 ) {
    //창 뜨게 하는거
    alert('\n\n정답입니다.'+ "\n"); }
   else {
    alert('\n\n틀렸습니다. 정답은 3번, print "Hello, World"'+ "\n"); }
   break;
  }
 }
 /*
 for(i=0;i<chkage.length;i++){
  if(chkage[i].checked==true){
   age=chkage[i].value;
   break;
  }
 }
 job = document.fm.job.options[document.fm.job.selectedIndex].text;
 
 //관심분야 체크박스들의 배열 생성 및 초기화
 var a=new Array();
 a[0]=document.fm.chk_info1;
 
 var info="";
 for(i=0;i<checkbox_num;i++){
  if(a[i].checked==true){
   info+=","+a[i].value;
  }
 }
 user_info=age+","+sex+","+job+info; 
 */
 
 
}
</script>
 <title>설문조사</title>
</head>
<form name="fm" method="get">
 <p> 1. "Hello, World를 출력하는 문장으로 옳은 것은? </p>
 <input type="radio" name="chk" value=1 checked="true">1. print Hello, World
 <input type="radio" name="chk" value=2>2. printf Hello, World
 <input type="radio" name="chk" value=3>3. print "Hello, World"
 <p></p>
 
  <p><form name="input" method="post" action="">
  <input type="button" value="확인" onClick="func()"></form></p>
 
 <p>연령</p>
 <input type="radio" name="chk_age" value="십대"checked="true">10대
 <input type="radio" name="chk_age" value="이십대">20대
 <input type="radio" name="chk_age" value="삼십대">30대
 <input type="radio" name="chk_age" value="사십대">40대
 <p></p>
 
 
 <select name="job" onChange="chg(this.selectedIndex)">
  <option value="">직업선택</option>
  <option value="관리">관리</option>
   s<option value="건설">건설</option>
  <option value="경비">경비</option>
  <option value="경영">경영/회계,사무</option>
  <option value="교육">교육/연구</option>
  <option value="금융">금융/보험</option>
  <option value="군인">군인</option>
  <option value="기계">기계</option>
  <option value="농림어업">농림어업</option>
  <option value="문화">문화/예술/방송</option>
  <option value="미용">미용,숙박,여행</option>
  <option value="법률">법률/경찰/소방/교도</option>
  <option value="보건">보건/의료</option>
  <option value="사회복지">사회복지/종교</option>
  <option value="섬유">섬유/의복</option>
  <option value="식품가공">식품가공</option>
  <option value="영업">영업/판매</option>
  <option value="운전">운전/운송</option>
  <option value="전기">전기/전자</option>
  <option value="인쇄">인쇄/목재/가구</option>
  <option value="화학">화학</option>
  <option value="학생">학생</option>
  <option value="대학생">대학(원)생</option>
  <option value="기타">기타</option>
 </select>
 
 
 
 <p>관심분야</p>
 <p>정치</p>
 <p>
  <input type="checkbox" name="chk_info1" value="청와대/외교">청와대/외교
  <input type="checkbox" name="chk_info2" value="국회/정당">국회/정당
  <input type="checkbox" name="chk_info3" value="북한/국방/안보">북한/국방/안보
  <input type="checkbox" name="chk_info4" value="행정">행정
 </p>
 <p>경제</p>
 <p>
  <input type="checkbox" name="chk_info5" value="금융/증시">금융/증시
  <input type="checkbox" name="chk_info6" value="글로벌경제">글로벌경제
  <input type="checkbox" name="chk_info7" value="생활경제">생활경제
  <input type="checkbox" name="chk_info8" value="기업">기업/재계
 </p>
 <p>
  <input type="checkbox" name="chk_info9" value="부동산">부동산
  <input type="checkbox" name="chk_info10" value="재테크">재테크
 </p>
 <p>사회</p>
 <p>
  <input type="checkbox" name="chk_info11" value="사건사고">사건사고
  <input type="checkbox" name="chk_info12" value="교육">교육
  <input type="checkbox" name="chk_info13" value="노동">노동
  <input type="checkbox" name="chk_info14" value="언론">언론
 </p>
 <p>
  <input type="checkbox" name="chk_info15" value="환경">환경
  <input type="checkbox" name="chk_info16" value="인권/복지">인권/복지
  <input type="checkbox" name="chk_info17" value="식품/의료">식품/의료
 </p>
 <p>생활/문화</p>
 <p>
  <input type="checkbox" name="chk_info18" value="날씨">날씨
  <input type="checkbox" name="chk_info19" value="생활정보/트렌드">생활정보/트렌드
  <input type="checkbox" name="chk_info20" value="교통/자동차">교통/자동차
  <input type="checkbox" name="chk_info21" value="여행/레저">여행/레저
 </p>
 <p>
  <input type="checkbox" name="chk_info22" value="음식/맛집">음식/맛집
  <input type="checkbox" name="chk_info23" value="문화/예술">문화/예술
  <input type="checkbox" name="chk_info24" value="공연/전시">공연/전시
  <input type="checkbox" name="chk_info25" value="패션/뷰티">패션/뷰티
 </p>
 <p>
  <input type="checkbox" name="chk_info26" value="건강/다이어트">건강/다이어트
  <input type="checkbox" name="chk_info27" value="가정/육아">가정/육아
 </p>


 </body>
</html>


<!-- 사지선다형 문제 끝 -->
