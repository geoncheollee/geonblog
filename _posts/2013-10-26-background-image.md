---
layout: post
title: Beginning Python
description: "Python 소개 및 역사"
tags: [sample post]
image:
  background: triangular.png
comments: true
share: true
---

# 01 파이썬이란?

## 1-1 파이썬이란 무엇인가?
Python의 사전적 의미는 독이 없는 뱀으로 먹이를 몸으로 감아서 압사시키는 큰뱀, 또는 그리스 신화에 나오는 악마.

## 1-2 왜 파이썬이란 이름이 붙었나?
프로그래밍 언어로서 Python 이름의 유래는 1970년대에 영국 BBC에서 방영한 "Monty Python's Flying Circus" 방영 프로그램에서 유래되었다. 이 프로그램은 매우 어색하고 이상한 행동을 보이는 사람들을 쇼형태로 방영하여 많은 인기를 누렸다.
이 언어를 만든 Guido van Rossum이 이 프로그램의 대단한 팬이었기 때문이었다.
1989년 12월 크리스마스 휴가를 보내고 있던 Guido는 휴가 기간동안 무엇인가 재미있게 할 수 있는 무언가를 찾고 있었다.
연휴라서 연구실이 닫힌 상황에서 집에서 컴퓨터를 가지고 예전부터 생각하고 있었던 인터프리터(interpreter)를 만들어 보기로 결심하였다.
즉, Guido가 무료한 한때를 보내기 위하여 만들기 시작했던 언어가 지금 많은 사람들이 사용하는 Python 언어가 되었다.

## 1-3 왜 파이썬을 배워야 하는가?
- 가장 중요한 대답: "생산성이 띄어나기 때문"
- 먼저 개발하라! 그리고 나서 성능을 개선하라.

## 1-4 파이썬은 어떤 언어인가?
- 대화 기능의 인터프리터 언어
- 동적인 데이터 타입 결정 지원

{% highlight html linenos %}
{% raw %}
def add(a,b):
  return a+b
  
print add(1,2)
{% endraw %}
{% endhighlight %}


{% highlight html linenos %}
{% raw %}
3
abcdef
[1, 2, 3, 4, 5, 6]
{% endraw %}
{% endhighlight %}

This little bit of YAML makes the assumption that your background image asset is in the `/images` folder. If you place it somewhere else or are hotlinking from the web, just include the full http(s):// URL. Either way you should have a background image that is tiled.

If you want to set a background image for the entire site just add `background: filename.png` to your `_config.yml` and BOOM --- background images on every page!

<div xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/" about="http://subtlepatterns.com" class="notice">Background images from <span property="dct:title">Subtle Patterns</span> (<a rel="cc:attributionURL" property="cc:attributionName" href="http://subtlepatterns.com">Subtle Patterns</a>) / <a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/">CC BY-SA 3.0</a></div>
