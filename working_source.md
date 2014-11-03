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
---
<iframe width="854" height="510" src="//www.youtube.com/embed/obO1oUu8AK8" frameborder="0" allowfullscreen></iframe>

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


<!-- 문제풀이 -->
<html>

<div class="page">
<div class="body">
<div class="main">

<SCRIPT> 
function func(){
 //checkbox_num=관심분야 체크박스 개수
 //sex=성별정보, age=나이정보, job=직업정보, info=관심분야 정보, user_info=나이, 성별, 직업, 관심분야 통합 정도
 
 var chk=document.fm.chk_1;
 
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
}
</script>

<form name="fm" method="get">

 <p> 1. "Hello, World를 출력하는 문장으로 옳은 것은? </p>
 
 <p></p>
 <input type="radio" name="chk_1" value="chk_1"> (1) print Hello, World <p></p>
 <input type="radio" name="chk_1" value="chk_2"> (2) printf Hello, World <p></p>
 <input type="radio" name="chk_1" value="chk_3"> (3) print "Hello, World" <p></p>
 
  <p><form name="input" method="post" action="">
  <input type="button" value="확인" onClick="func()"></form></p>

 
 
</div>
</div>
</div>

</html>


<!-- 사지선다형 문제 끝 -->
