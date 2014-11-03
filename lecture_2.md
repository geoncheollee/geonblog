---
layout: page
permalink: /lecture_2/
<!-- title: 문자열 -->
description: "문자열 문법 소개 및 예제"
image:
  feature: lecture_4_logo.jpg
  <!-- creditlink: https://github.com/geoncheollee/geonblog/blob/gh-pages/images/lecture_4_logo.jpg -->
share: true
---


<html>
	<body>
	
	

		<div style="background-image: URL({{ site.url }}/images/list2.png); height: 400px; width: 200px; border: 2px solid white; position: fixed; top: 35px; right: 35px;">
			<br>
  			<a href="#string" style="color: white; font-style:Impact"> &nbsp;&nbsp; <b>String</b></a> <br>
  			<a href="#string_1" style="color: white"> &nbsp;&nbsp; <b>1.1 Sequence Type</b></a> <br>
  			<a href="#string_2" style="color: white"> &nbsp;&nbsp; <b>1.2 Indexing</b></a> <br>
  			<a href="#string_3" style="color: white"> &nbsp;&nbsp; <b>1.3 Slicing</b></a> <br>
  			<a href="#string_4" style="color: white">&nbsp;&nbsp;  <b>1.4 Expansion Slicing</b></a> <br>
  			<a href="#string_5" style="color: white"> &nbsp;&nbsp; <b>1.5 connection</b></a> <br>
  			<a href="#string_6" style="color: white"> &nbsp;&nbsp; <b>1.6 Repeat</b></a> <br>
  			<a href="#string_7" style="color: white"> &nbsp;&nbsp; <b>1.7 Membership Test</b></a> <br>
  			<a href="#string_8" style="color: white"> &nbsp;&nbsp; <b>1.8 Length</b></a> <br>
  			<a href="#string_movie" style="color: white"> &nbsp;&nbsp; <b>movie</b></a> <br>
  			<a href="#string_problem" style="color: white"> &nbsp;&nbsp; <b>Solve Problem</b></a> <br>
  			<a href="#string_code" style="color: white"> &nbsp;&nbsp; <b>Practice</b></a>
  			
		</div>
		
	</body>
</html>



<div id="string"></div>

# 문자열


## 01 시퀀스 자료형의 특성

<div id="string_1"></div>

### 1-1 시퀀스 자료형이란?
- 저장된 각 요소를 정수 Index를 이용하여 참조가 가능한 자료형 
- 시퀀스(Sequence) 자료형: 문자열, 리스트, 튜플
- 시퀀스 자료형이 가지는 공통적인 연산
  - 인덱싱 (Indexing)
  - 슬라이싱 (Slicing)
  - 확장 슬라이싱 (Extended Slicing)
  - 연결 (Concatenation)
  - 반복 (Repitition)
  - 멤버쉽 테스트 (Membership Test)
  - 길이 정보 (Length)
  - for ~ in 문

<br><br>

<div id="string_2"></div>

### 1-2 인덱싱

{% highlight python linenos %}
{% raw %}
s = 'abcdef'
l = [100,200,300]
print s[0]
print s[1]
print s[-1]
print
print l[1]
l[1] = 900
print l[1]
{% endraw %}
{% endhighlight %}

{% highlight html %}
a
b
f

200
900
{% endhighlight %}



<br><br>

<div id="string_3"></div>

### 1-3 슬라이싱

{% highlight python linenos %}
{% raw %}
s = 'abcdef'
L = [100, 200, 300]

print s[1:3]
print s[1:]
print s[:]
print s[-100:100]
print
print L[:-1]     # L[:2] 와 동일
print L[:2]
{% endraw %}
{% endhighlight %}

{% highlight html %}
bc
bcdef
abcdef
abcdef

[100, 200]
[100, 200]
{% endhighlight %}



<br><br>


<div id="string_4"></div>

### 1-4 확장 슬라이싱


{% highlight python linenos %}
{% raw %}
s = 'abcd'
print s[::2]   #step:2 - 오른쪽 방향으로 2칸씩
print s[::-1]  #step:-1 - 왼쪽 방향으로 1칸씩
{% endraw %}
{% endhighlight %}

{% highlight html %}
ac
dcba
{% endhighlight %}



<br><br>

<div id="string_5"></div>

### 1-5 연결하기

{% highlight python linenos %}
{% raw %}
s = 'abc' + 'def'
print s

L = [1,2,3] + [4,5,6]
print L
{% endraw %}
{% endhighlight %}

{% highlight html %}
abcdef
[1, 2, 3, 4, 5, 6]
{% endhighlight %}



<br><br>

<div id="string_6"></div>

### 1-6 반복하기

{% highlight python linenos %}
{% raw %}
s = 'Abc'
print s * 4

L = [1,2,3]
print L * 2
{% endraw %}
{% endhighlight %}

{% highlight html %}
AbcAbcAbcAbc
[1, 2, 3, 1, 2, 3]
{% endhighlight %}



<br><br>

<div id="string_7"></div>

### 1-7 멤버십 테스트

{% highlight python linenos %}
{% raw %}
s = 'abcde'
print 'c' in s

t = (1,2,3,4,5)
print 2 in t
print 10 in t
print 10 not in t
{% endraw %}
{% endhighlight %}

{% highlight html %}
True
True
False
True
{% endhighlight %}



{% highlight python linenos %}
{% raw %}
print 'ab' in 'abcd'
print 'ad' in 'abcd'
print ' ' in 'abcd'
print ' ' in 'abcd '
{% endraw %}
{% endhighlight %}


{% highlight html %}
True
False
False
True
{% endhighlight %}



<br><br>

<div id="string_8"></div>

### 1-8 길이 정보

{% highlight python linenos %}
{% raw %}
s = 'abcde'
l = [1,2,3]
t = (1, 2, 3, 4)
print len(s)
print len(l)
print len(t)
{% endraw %}
{% endhighlight %}

{% highlight html %}
5
3
4
{% endhighlight %}

<br><br>


<div id="string_movie"></div>

## 참고 동영상

<iframe width="854" height="510" src="//www.youtube.com/embed/qWy-kTU8qYU?list=PLc91J-KoFBX-d1SsaakXM8mOnCeOEzH32" frameborder="0" allowfullscreen></iframe>

<br><br>

<div id="string_problem"></div>

<br><br>

## 문제 풀어보기

<!-- 1번 문제풀이 -->
{% highlight python linenos %}
{% raw %}
s = 'hello, python'
print s[5]
{% endraw %}
{% endhighlight %}

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
   if (i == 0 ) {
    //창 뜨게 하는거
    alert('\n\n정답입니다.'+ "\n"); }
   else {
    alert('\n\n틀렸습니다. 정답은 1번'+ "\n"); }
   break;
  }
 }
}
</script>

<form id="fm" name="fm" method="get">

 <p> 1. 위의 코드 결과로 알맞은 것은?? </p>
 
 <p></p>
 <input type="radio" name="chk_1" value="chk_1"> (1) , <p></p>
 <input type="radio" name="chk_1" value="chk_2"> (2) h <p></p>
 <input type="radio" name="chk_1" value="chk_3"> (3) 공백 <p></p>
 <input type="radio" name="chk_1" value="chk_4"> (4) W <p></p>
 

  <p><form name="input" method="post" action="">
  <input type="button" value="확인" onClick="func()"></form></p>
 
 
</div></div></div>
</html>
<!-- 문제풀이 끝-->

<br>

<!-- 2번 문제풀이 -->
{% highlight python linenos %}
{% raw %}
s1 = 'hello'
s2 = 'World'
print s1 + s2
{% endraw %}
{% endhighlight %}

<html>
<div class="page">
<div class="body">
<div class="main">

<SCRIPT> 
function func1(){
 //checkbox_num=관심분야 체크박스 개수
 //sex=성별정보, age=나이정보, job=직업정보, info=관심분야 정보, user_info=나이, 성별, 직업, 관심분야 통합 정도
 
 var chk1=document.fm1.chk_2;
 
 for(i=0;i<chk1.length;i++){
  if(chk1[i].checked==true){
   if (i == 2 ) {
    //창 뜨게 하는거
    alert('\n\n정답입니다.'+ "\n"); }
   else {
    alert('\n\n틀렸습니다. 정답은 3번'+ "\n"); }
   break;
  }
 }
}
</script>

<form id="fm1" name="fm1" method="get">

 <p> 2. 위의 코드 결과로 알맞은 것은?? </p>
 
 <p></p>
 <input type="radio" name="chk_2" value="chk_1"> (1) Hello,World <p></p>
 <input type="radio" name="chk_2" value="chk_2"> (2) Hello World <p></p>
 <input type="radio" name="chk_2" value="chk_3"> (3) HelloWorld <p></p>
 <input type="radio" name="chk_2" value="chk_4"> (4) Hello <p></p>
 

  <p><form name="input" method="post" action="">
  <input type="button" value="확인" onClick="func1()"></form></p>

</div></div></div>
</html>
<!-- 문제풀이 끝-->


<br><br>

<div id="string_code"></div>

<!-- 파이썬 코드 실행기  -->
<html>
<body>
    <h2>파이썬 연습하기</h2>

    <p>파이썬 코드를 입력 후 RUN 버튼을 누르세요.</p>

    <iframe src="https://trinket.io/embed/python/538012d3a6554c7945027aab" width="100%" height="356" frameborder="0" marginwidth="0" marginheight="0" allowfullscreen> </iframe>
</body>
</html>
<!-- 파이썬 코드 실행기 끝 -->


<!-- 이미지 기능 -->
<figure>
	<a href="http://farm9.staticflickr.com/8426/7758832526_cc8f681e48_b.jpg"><img src="http://farm9.staticflickr.com/8426/7758832526_cc8f681e48_c.jpg" alt=""></a>
	<figcaption><a href="http://www.flickr.com/photos/80901381@N04/7758832526/" title="Morning Fog Emerging From Trees by A Guy Taking Pictures, on Flickr">Morning Fog Emerging From Trees by A Guy Taking Pictures, on Flickr</a>.</figcaption>
</figure>

<br><br>

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
<!-- 댓글 기능 끝 -->

