---
layout: page
permalink: /python_intro/
<!_- title: Python 학습 개요 -->
description: "파이썬 학습의 개요"
tags: [Jekyll, theme, install, setup]
image:
  feature: python_intro.jpg
share: true
---

<html>
	<body>
		<div style="background-image: URL({{ site.url }}/images/list2.png); height: 170px; width: 200px; border: 2px solid black; position: fixed; top: 35px; right: 35px;"><br>
  			<a href="#1" style="color: white"> &nbsp;&nbsp;Programming 무경험자</a> <br>
  			<a href="#2" style="color: white"> &nbsp;&nbsp;C/C++ 프로그래머</a> <br>
  			<a href="#3" style="color: white"> &nbsp;&nbsp;기타사항</a> <br>
  			<a href="#4" style="color: white"> &nbsp;&nbsp;Python 개요 및 설치방법 </a> <br>
  			<a href="#forum" style="color: white"> &nbsp;&nbsp;Forum </a> <br>

  			
		</div>
		
	</body>
</html>



# 파이썬을 배워야 하는 이유...
---
---

<div id="1"></div>

##Programming에 대한 경험이 없는 사람의 경우
---

- 복잡한 문법(어느 정도 주관적인 기준으로 바라본 것이긴 하지만)을 필요로 하는 Perl이나 C, C++에 비해 **문법이 간단**하다. 따라서 **배우기 쉽다**는 장점이 있다.

- C와 비교했을 때, 포인터와 같은 배우기 힘든 개념이 없기 때문에, **상대적으로 많은 시간을 프로그램 구조와 디자인 등에 투자할 수 있다**.

- C++과 비교했을때, **OOP의 기본적인 사항들은 더욱 빠르게 배울 수 있다**.
  기본적으로 **인터프리터 방식**이기 때문에, **코드의 결과를 바로바로 확인**해 볼 수 있고, **다양한 운영체제를 지원**한다.      또한 원할 경우, 바로 실행 파일(.exe)을 만들어 낼 수도 있다.

- 다양한 라이브러리를 지원하기 때문에, **상대적으로 적은 양의 코드만으로도 GUI 프로그램, game, CGI 프로그램등을 빠르게 만들 수 있다**.

---

<div id="2"></div>

##C/C++ 프로그래머인 경우
---

- C/C++ 그리고 Bourne shell과 유사한 문법을 가지고 있기 때문에, 기타 **다른 스크립트 언어에 비해 익히는 속도가 매우 빠르다.**
OS에 관련된 기능들은 (예: POSIX interface) 대부분 C/C++에서 제공되는 함수와 같은 이름을 쓰고, 심지어 인자 타입이나 의미까지 비슷한 경우가 많기 때문에, 익혀야하는 함수들이 타 스크립트 언어와 비교할 때 많지 않다.

- class, virtual function, 제한적인 operator overloading을 지원하기 때문에 **C++에서 썼던 디자인 방식 그대로 적용할 수 있다.**

- Mixed language programming -- Python은 기타 **다른 스크립트 언어에 비해 C/C++로 python module을 작성하기가 매우 쉽다.** (어느 정도 주관적인 견해 포함)

- 제한적이나마 lambda expression을 제공하기 때문에, LISP/Scheme 등에 익숙한 사람들도 비슷한 코드를 쉽게 만들 수 있다. map(), apply() 함수 제공, closure 제공

- 다른 스크립트 언어에 비해 문서화가 잘 되어 있으며 (Tutorial, Library Reference, Language Reference 제공), 문법 자체에 LISP/Scheme과 마찬가지로 documentation string을 집어 넣을 수 있고, built-in 함수인 dir()을 쓰면, 함수, 모듈, 오브젝트가 제공하는 심볼 테이블을 바로 볼 수 있기 때문에 **다른 스크립트 언어를 쓸 때에 비해, 따로 문서를 찾아보는 빈도가 낮아진다.**
함수, 클래스 또는 변수에 Decorator를 직접 제작할 수 있다. Decorator란 C/C++ 문법상 qualifier에 해당하는 것으로 다양한 wrapper를 만들거나 class인 경우 static, class method를 지정할 수 있다. Python 2.4 Decorators 참고

---

<div id="3"></div>

##기타 사항
---

- **Dictionary (Postscript의 dictionary나 다른 언어의 associative array에 해당) 타입이 제공**된다. 또한 immutable list에 가까운 tuple 타입이 제공되며, 서로 대입이 가능하기 때문에, **한 줄의 코드로 변수 값을 치환할 수도 있다.**

- **모든 타입은 repr() 연산을 써서 문자열로 변경할 수 있다.** 또한 eval() 연산을 써서 문자열을 평가한 후 python type으로 불러 올 수 있다. 따라서 이 기능과 여러 DB 모듈을 잘 활용하면, 모든 Python type을 DB에 저장/로드하는 것이 가능해진다.

- GTK+ binding이 제공되며, GTK+ C API 또는 C++ API(gtkmm)에 비해 훨씬 **간단하게 GUI application을 작성할 수 있다.** 또한 이미 GTK binary가 MS Windows 용으로 제공되기 때문에, 간단하게 Windows application도 만들 수 있다. (Pygtk 참고)

- Python은 SDL binding을 제공하기 때문에, **게임을 만들어 보고 싶은 개발자에게도 최적의 언어라고 할 수 있다.** (PyGame 참고)

- Python 자체적으로 cgi, urllib, httplib 등의 모듈을 제공하며, 다양한 XML parsing module도 제공하며, Berkeley DB, GDBM, sqlite, oracle, ODBC등의 DB 모듈도 제공하기 때문에, Web application을 쉽게 만들 수 있다.

- zlib, bz2, gzip, zipfie, tarfile등의 모듈을 자체적으로 제공하기 때문에 **압축 파일 관련 처리가 매우 쉽다.**

- 다양한 os 기능과 함께 curses 모듈도 제공, **terminal에서 실행되는 installer나 administrative tool을 만들기가 편리하다.**

- Built-in source debugger인 **pdb를 제공한다.**

- 실제 개발할 때 Emacs(Pymacs, python-mode package 활용)에서 완벽하게 interpreter를 지원하며, 다양한 형태의 (buffer, region)등을 python 실행 결과를 확인할 수도 있다. 또한 Emacs 내부에서 디버거를 실행할 수 있으며(M-x pdb), Web browser w3m package를 쓰면 따로 도움말을 보기 위해 browser를 띄울 필요도 없기 때문에 매우 편리하다! (python-mode, w3m, emacs-w3m 참고)

---

---

<div id="4"></div>

##Python 개요 및 설치방법
---

<iframe width="854" height="510" src="//www.youtube.com/embed/obO1oUu8AK8" frameborder="0"></iframe>
---

<div id="forum"></div>

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
