---
layout: page
permalink: /lecture_3/
title: 수치 자료형과 연산자
description: "수치 자료형과 연산자 소개 및 예제"
tags: [Jekyll, theme, install, setup]
image:
  <!--feature: abstract-11.jpg
  credit: dargadgetz
  creditlink: http://www.dargadgetz.com/ios-7-abstract-wallpaper-pack-for-iphone-5-and-ipod-touch-retina/-->
share: true
---
수정1
***
***
# 3. 수치 자료형과 연산자
***
***

***
## 01 수치 자료형
***

### 1-1 정수형 상수
<!-- 코드입력부 기능 -->
{% highlight html linenos %}
{% raw %}
a = 23      # 10진 정수
b = 023     # 8진 정수
c = 0x23    # 16진 정수
print type(a), type(b), type(c)
print a, b, c
{% endraw %}
{% endhighlight %}

<!-- 코드 출력부 기능 -->
{% highlight html %}
<type 'int'> <type 'int'> <type 'int'>
23 19 35
{% endhighlight %}

####1-2 실수형 상수
<!-- 코드입력부 기능 -->
{% highlight html linenos %}
{% raw %}
a = 1.2
b = 3.5e3
c = -0.2e-4
print type(a), type(b), type(c)
print a, b, c
{% endraw %}
{% endhighlight %}

<!-- 코드 출력부 기능 -->
{% highlight html %}
<type 'float'> <type 'float'> <type 'float'>
1.2 3500.0 -2e-05
{% endhighlight %}

####1-3 Decimal 자료형
<!-- 코드입력부 기능 -->
{% highlight html linenos %}
{% raw %}
a = 1.2
b = 3.5e3
c = -0.2e-4
print type(a), type(b), type(c)
print a, b, c
{% endraw %}
{% endhighlight %}

<!-- 코드 출력부 기능 -->
{% highlight html %}
<type 'float'> <type 'float'> <type 'float'>
1.2 3500.0 -2e-05
{% endhighlight %}

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
