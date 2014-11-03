---
layout: page
permalink: /lecture_1/
<!-- title: 수치 자료형과 연산자 -->
description: "수치 자료형과 연산자 소개 및 예제"
tags: [Jekyll, theme, install, setup]
image:
  feature: lecture_3_logo.jpg

share: true
---

  <!--
  credit: dargadgetz
  creditlink: http://www.dargadgetz.com/ios-7-abstract-wallpaper-pack-for-iphone-5-and-ipod-touch-retina/-->
<html>
	<body>
	
	

		<div style="background-image: URL({{ site.url }}/images/list2.png); height: 410px; width: 200px; border: 2px solid black; position: fixed; top: 35px; right: 35px;">
  			<br><a href="#01" style="color: white"> &nbsp;01.수치 자료형 </a> <br>
  			<a href="#1-1" style="color: white"> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1-1 정수형 상수 </a> <br>
  			<a href="#1-2" style="color: white"> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1-2 실수형 상수 </a> <br>
  			<a href="#1-3" style="color: white"> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1-3 Decimal 자료형 </a> <br><br>
  			<a href="#02" style="color: white"> &nbsp;02 파이썬 연산자 </a> <br>
  			<a href="#2-1" style="color: white"> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2-1 산술 연산자 </a> <br>
  			<a href="#2-2" style="color: white"> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2-2 관계 연산자 </a> <br>
  			<a href="#2-3" style="color: white"> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2-3 논리 연산자 </a> <br>
  			<a href="#2-4" style="color: white"> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2-4 비트 단위 연산자 </a> <br><br>
  			<a href="#problem" style="color: white"> &nbsp; 연습문제 </a> <br>
  			<a href="#coding" style="color: white"> &nbsp; 코딩 실습 </a> <br>
  			<a href="#forum" style="color: white"> &nbsp; Forum </a> <br>
		</div>
		
	</body>
</html>

<html>
<h1>수치 자료형과 연산자</h1>

<div id="01"></div>
<h2>01. 수치 자료형</h2>
</html>

<div id="1-1"></div>

### 1-1 정수형 상수

{% highlight python linenos %}
{% raw %}
a = 23      # 10진 정수
b = 023     # 8진 정수
c = 0x23    # 16진 정수
print type(a), type(b), type(c)
print a, b, c
{% endraw %}
{% endhighlight %}


{% highlight html %}
<type 'int'> <type 'int'> <type 'int'>
23 19 35
{% endhighlight %}

---

<div id="1-2"></div>

####1-2 실수형 상수

{% highlight python linenos %}
{% raw %}
a = 1.2
b = 3.5e3
c = -0.2e-4
print type(a), type(b), type(c)
print a, b, c
{% endraw %}
{% endhighlight %}

{% highlight html %}
<type 'float'> <type 'float'> <type 'float'>
1.2 3500.0 -2e-05
{% endhighlight %}

<!-- 파이썬 코드 실행기  -->
<html>
<body>
    <h2>파이썬 연습하기</h2>

    <p>파이썬 코드를 입력 후 RUN 버튼을 누르세요.</p>

    <iframe src="https://trinket.io/embed/python/538012d3a6554c7945027aab" width="100%" height="356" frameborder="0" marginwidth="0" marginheight="0" allowfullscreen> </iframe>
</body>
</html>

---

<div id="1-3"></div>

####1-3 Decimal 자료형
- 컴퓨터의 부동소수점 (Floating point)에 의한 실수 표현은 매우 미미한 오차를 동반함
- 그러한 오차를 최대한 줄이고 최대한 정확한 결과 값을 얻어내기 위해 사용할 수 있는 모듈 -> decimal 모듈
- 다음 두 개의 클래스를 제공
  - Decimal: 숫자 자체를 표현
  - Context: 정확도나 반올림 방법 등과 같은 환경 설정

{% highlight python linenos %}
{% raw %}
e = 0.0                   # 기본 자료형인 float형 변수 e 생성 및 0.0 값으로 초기화
for k in range(10000):    # 0부터 9999 까지 만번 반복
    e += 0.0001           # 0.0001을 누적  
    
print e                   # print로는 1.0이 출력됨
e
{% endraw %}
{% endhighlight %}

{% highlight html %}
1.0
0.9999999999999062
{% endhighlight %}

{% highlight python linenos %}
{% raw %}
from decimal import *
e2 = Decimal('0.0')        # 기본 자료형인 float형 변수 e 생성 및 0.0 값으로 초기화
delta = Decimal('0.0001') # 누적하려고 하는 0.0001 값을 Decimal 객체인 delta 변수로 생성

for k in range(10000):    # 0부터 9999 까지 만번 반복
    e2 += delta            # delta를 누적  
    
print e2                   # print로는 1.0이 출력됨
e2
{% endraw %}
{% endhighlight %}

{% highlight html %}
1.0000
Decimal('1.0000')
{% endhighlight %}

- 최근 python 버전에서는 실수에 대한 지수승 지원 (decimal이 아니어도 실수에 대한 지수승 가능) 
- Decimal 타입과 기본 실수형에 대한 사칙연산은 에러 발생

{% highlight python linenos %}
{% raw %}
a = Decimal('35.72') b = Decimal('1.73')
print a ** 2
a ** b
{% endraw %}
{% endhighlight %}

{% highlight html %}
1275.9184
Decimal('485.8887109649886451686600498')
{% endhighlight %}

- ROUND_HALF_UP vs. ROUND_HALF_EVEN
  - ROUND_HALF_UP:
    - 2.44 -> 2.4
    - ***2.45 -> 2.5***
    - 2.46 -> 2.5
    - ...
    - 2.54 -> 2.5
    - ***2.55 -> 2.6***
    - 2.56 -> 2.6
  - ROUND_HALF_EVEN은 거리가 같은 경우에 마지막의 숫자가 짝수를 유지하도록 함
  - ROUND_HALF_EVEN:
    - 2.44 -> 2.4
    - ***2.45 -> 2.4***
    - 2.46 -> 2.5
    - ...
    - 2.54 -> 2.5
    - ***2.55 -> 2.6***
    - 2.56 -> 2.6

- Rounding에 대한 참고자료
  - [참고자료1](https://docs.python.org/2/library/decimal.html#context-objects)
  - [참고자료2](http://www-01.ibm.com/support/knowledgecenter/SSEPGG_9.7.0/com.ibm.db2.luw.admin.config.doc/doc/r0052298.html?cp=SSEPGG_9.7.0%2F2-2-6-7-29&lang=ko)


---

<div id="02"></div>

<html>
<h2> 02 파이썬 연산자</h2>
</html>

<div id="2-1"></div>

### 2-1 산술 연산자

{% highlight python linenos %}
{% raw %}
print 2 ** 3
print 5 % -3
print 3.0 // 4.0
print -3 // 4
print 3.0 / 4.0
print -3 / 4
print -7/4     #단항 연산자(-)의 우선순위가 이항 연산자(/)의 우선순위보다 높다 (-7을 4로 나눈다).
print -(7/4)   #7/4의 결과에 단항 연산을 수행함
print 2 + 3 * 4
print --3
{% endraw %}
{% endhighlight %}

{% highlight html %}
8
-1
0.0
-1
0.75
-1
-2
-1
14
3
{% endhighlight %}

---

<div id="2-2"></div>

### 2-2 관계 연산자
- 객체가 지닌 값의 크기(대소)를 비교함

{% highlight python linenos %}
{% raw %}
print 6 == 9
print 6 != 9

a = 5
b = 10
0 < a and a < b
{% endraw %}
{% endhighlight %}

{% highlight html %}
False
True

True
{% endhighlight %}

- 서로 다른 자료형간의 크기 관계
  - 숫자 < 사전 < 리스트 < 문자열 < 튜플

{% highlight python linenos %}
{% raw %}
print 9999999999999999999999L < 'abc'
print {3:2} < [1,2,3] < (1,2,3)
{% endraw %}
{% endhighlight %}

{% highlight html %}
True
True
{% endhighlight %}


{% highlight python linenos %}
{% raw %}
x = [1,2,3]
y = [1,2,3]
z = y

print x == y
print x == z
print x is y
print x is z
print y is z
{% endraw %}
{% endhighlight %}

{% highlight html %}
True
True
False
False
True
{% endhighlight %}

<!-- 이미지 기능 -->
<figure>
	<a href="http://nbviewer.ipython.org/github/bluebibi/python/blob/master/images/objectIdentity.png"><img src="http://nbviewer.ipython.org/github/bluebibi/python/blob/master/images/objectIdentity.png" alt=""></a>
</figure>



---

<div id="2-3"></div>

### 2-3 논리 연산자 (or 부울 연산자)
- 피연산자의 값으로 진리값인 True 또는 False을 취하여 논리 적인 계산을 수행하는 연산자
  - and
  - or
  - not
- 논리 연산자 자체가 값을 반환하지는 않는다. 
- 논리 연산을 따라 최종적으로 평가(Evaluation)되어진 값이 반환된다.

{% highlight python linenos %}
{% raw %}
a = 20
b = 30

a > 10 and b < 50
{% endraw %}
{% endhighlight %}

{% highlight html %}
True
{% endhighlight %}

- 진리값에 해당하는 True와 False는 다른 사칙연산자를 만나면 다음과 같이 평가됨
  - True: 1
  - False: 0

{% highlight python linenos %}
{% raw %}
print True + 1
print False + 1

print bool(0) # 정수 0은 거짓
print bool(1)
{% endraw %}
{% endhighlight %}

{% highlight html %}
2
1

False
True
{% endhighlight %}

- 값이 없는 빈 객체나 None 객체는 False로 평가됨

<div id="2-4"></div>

### 2-4 비트 단위 연산자
- 비트 단위 조작 지원
- 비트 단위 연산자
 - ~ : 비트 반전 (보수)
 - &lt;&lt;: 왼쪽으로 비트 이동
 - &gt;&gt;: 오른쪽으로 비트 이동
 - & :  비트 단위 AND
 - ^ : 비트 단위 XOR
 - | : 비트 단위 OR

#### 참고: 음수의 표현 (2의 보수 표현법)
- 음수는 leading one 으로 시작함 (양수는 leading zero)
- 만약 정수가 8비트로 이루진다면 "0000 0000"에서 "0111 1111" 숫자는 0에서 127을 나타냄
- 만약 정수가 8비트로 이루진다면 "1000 0000"에서 "1111 1111" 숫자는 -128에서 -1을 나타냄
  - ***[약속] 음수인 -x는 (x - 1)에 대한 1의 보수로 표현 (2의 보수 표현법)***
    - -x = 1's complement of (x - 1)
  - -1 = (1 - 1)에 대한 1의 보수 = 0에 대한 1의 보수 = "0000 0000"에 대한 1의 보수 = "1111 1111"
  - -10 = (10 - 1)에 대한 1의 보수 = 9에 대한 1의 보수 = "0000 1001"에 대한 1의 보수 = "1111 0110" 
  - -128 = (128 - 1)에 대한 1의 보수 = 127에 대한 1의 보수 = "0111 1111"에 대한 1의 보수 = "1000 0000"
  - "1111 1010" = "0000 0101"에 대한 1의 보수 = 5에 대한 1의 보수 = (6 - 1)에 대한 1의 보수 = -6
  - "1111 1110" = "0000 0001"에 대한 1의 보수 = 1에 대한 1의 보수 = (2 - 1)에 대한 1의 보수 = -2
- 참고
  - [참고자료1](http://www.ecogwiki.com/2%EC%9D%98_%EB%B3%B4%EC%88%98%EB%B2%95%EC%9C%BC%EB%A1%9C_%EC%9D%8C%EC%88%98_%ED%91%9C%ED%98%84%ED%95%98%EA%B8%B0)
  - [참고자료1](http://multithread.tistory.com/entry/%EC%A0%95%EC%88%98%EC%9D%98-2%EC%9D%98%EB%B3%B4%EC%88%98-%ED%91%9C%ED%98%84)

---

<br><br><br>
<!-- 문제풀이 -->
<html>

<h2> 연습문제 </h2>

<div class="page">
<div class="body">
<div class="main">

<SCRIPT> 
function func(){

 var chk=document.fm.chk_1;
 
 for(i=0;i<chk.length;i++){
  if(chk[i].checked==true){
   if (i == 0 ) {
    //창 뜨게 하는거
    alert('\n\n정답입니다.'+ "\n"); }
   else {
    alert('\n\n틀렸습니다. 정답은 1번, print abcd > abd = False'+ "\n"); }
   break;
  }
 }
}
</script>

<form name="fm" method="get">

<div id="problem"></div>
 <p> 1. "다음 중 틀린 것은? </p>
 
 <p></p>
 <input type="radio" name="chk_1" value="chk_1"> (1) print 'abcd' > 'abd'             답 : True  <p></p>
 <input type="radio" name="chk_1" value="chk_2"> (2) print (1, 2, 4) < (2, 1, 0)      답 : True  <p></p>
 <input type="radio" name="chk_1" value="chk_3"> (3) print [1, 3, 2] == [1, 2, 3]     답 : False <p></p>
 <input type="radio" name="chk_1" value="chk_4"> (4) print {3:2} < [1,2,3] < (1,2,3)  답 : True  <p></p>
 
  <p><form name="input" method="post" action="">
  <input type="button" value="확인" onClick="func()"></form></p>

 
 
</div>
</div>
</div>

</html>

<!-- 사지선다형 문제 끝 -->

<br><br><br>

<div id="coding"></div>

<!-- 파이썬 코드 실행기  -->
<html>
<body>
    <h2>파이썬 연습하기</h2>

    <p>파이썬 코드를 입력 후 RUN 버튼을 누르세요.</p>

    <iframe src="https://trinket.io/embed/python/538012d3a6554c7945027aab" width="100%" height="356" frameborder="0" marginwidth="0" marginheight="0" allowfullscreen> </iframe>
</body>
</html>

<div id="forum"></div>

<br><br><br>

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

