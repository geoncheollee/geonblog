---
layout: page
permalink: /lecture_5/
<!-- title: 리스트 -->
description: "리스트 문법 소개 및 예제"  
image:
  feature: lecture_5_logo.jpg
---

<!DOCTYPE html>
<!-- 
Template Name: Metronic - Responsive Admin Dashboard Template build with Twitter Bootstrap 3.2.0
Version: 3.3.1
Author: KeenThemes
Website: http://www.keenthemes.com/
Contact: support@keenthemes.com
Follow: www.twitter.com/keenthemes
Like: www.facebook.com/keenthemes
Purchase: http://themeforest.net/item/metronic-responsive-admin-dashboard-template/4021469?ref=keenthemes
License: You must have a valid license purchased only from themeforest (the above link) in order to legally use the theme for your project.
-->
<!--[if IE 8]> <html lang="en" class="ie8 no-js"> <![endif]-->
<!--[if IE 9]> <html lang="en" class="ie9 no-js"> <![endif]-->
<!--[if !IE]><!-->
<html lang="en">
<!--<![endif]-->

<!-- Head BEGIN -->
<head>
  <meta charset="utf-8">
  <title>Typography | Metronic Frontend</title>

  <meta content="width=device-width, initial-scale=1.0" name="viewport">
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">

  <meta content="Metronic Shop UI description" name="description">
  <meta content="Metronic Shop UI keywords" name="keywords">
  <meta content="keenthemes" name="author">

  <meta property="og:site_name" content="-CUSTOMER VALUE-">
  <meta property="og:title" content="-CUSTOMER VALUE-">
  <meta property="og:description" content="-CUSTOMER VALUE-">
  <meta property="og:type" content="website">
  <meta property="og:image" content="-CUSTOMER VALUE-"><!-- link to image for socio -->
  <meta property="og:url" content="-CUSTOMER VALUE-">

  <link rel="shortcut icon" href="favicon.ico">

  <!-- Fonts START -->
  <link href="http://fonts.googleapis.com/css?family=Open+Sans:300,400,600,700|PT+Sans+Narrow|Source+Sans+Pro:200,300,400,600,700,900&amp;subset=all" rel="stylesheet" type="text/css">
  <!-- Fonts END -->

  <!-- Global styles START -->          
  <link href="../../assets/global/plugins/font-awesome/css/font-awesome.min.css" rel="stylesheet">
  <link href="../../assets/global/plugins/bootstrap/css/bootstrap.min.css" rel="stylesheet">
  <!-- Global styles END --> 
   
  <!-- Page level plugin styles START -->
  <link href="../../assets/global/plugins/fancybox/source/jquery.fancybox.css" rel="stylesheet">
  <!-- Page level plugin styles END -->

  <!-- Theme styles START -->
  <link href="../../assets/global/css/components.css" rel="stylesheet">
  <link href="../../assets/global/css/plugins.css" rel="stylesheet">
  <link href="../../assets/frontend/layout/css/style.css" rel="stylesheet">
  <link href="../../assets/frontend/layout/css/style-responsive.css" rel="stylesheet">
  <link href="../../assets/frontend/layout/css/themes/red.css" rel="stylesheet" id="style-color">
  <link href="../../assets/frontend/layout/css/custom.css" rel="stylesheet">
  <!-- Theme styles END -->
</head>
<!-- Head END -->

<!-- Body BEGIN -->
<body class="corporate">
    <!-- BEGIN STYLE CUSTOMIZER -->
    <div class="color-panel hidden-sm">
      <div class="color-mode">
        <h2>01 리스트의 일반연산</h2>
        
        <!-- box area -->
        <div class="row">
                  <div class="col-md-6">
                  <li class="active">리스트: 시퀀스 자료형이면서 변경 가능(Mutable)</a></li>
                  <li class="active">리스트에서 지원하는 일반적인 연산</a></li>
                  <li class="active">       인덱싱, 슬라이싱, 연결, 반복, 멤버쉽 테스트</a></li>
                    <div class="well">
                      <p>l = []</p>
                      <p>l = [1,2,"Great"]</p>
                      <p>print l[0], l[-1]</p>
                      <p>print l[1:3], l[:]</p>
                      <p>print</p>

                      <p>L = range(10)</p>
                      <p>print L[::2]</p>
                      <p>print</p>

                      <p>print l * 2</p>
                      <p>print l + [3, 4, 5]</p>
                      <p>print len(l)</p>
                      <p>print</p>
                      <p>print 4 in L</p>
                    </div>
                  </div>
                  <h5>1 Great</h5>
                  <h5>[2, 'Great'] [1, 2, 'Great']</h5>
                  <h5></h5>
                  <h5>[0, 2, 4, 6, 8]</h5>
                  <h5></h5>
                  <h5>[1, 2, 'Great', 1, 2, 'Great']</h5>
                  <h5>[1, 2, 'Great', 3, 4, 5]</h5>
                  <h5>3</h5>
                  <h5></h5>
                  <h5>True</h5>
                </div>
      <!-- box area end -->
      <!-- box area -->
        <div class="row">
                  <div class="col-md-6">
                  <li class="active">Mutable 특성을 지닌 리스트의 값 변경</a></li>
                    <div class="well">
                      <p>a = ['spam', 'eggs', 100, 1234]</p>
                      <p>a[2] = a[2] + 23</p>
                      <p>print a</p>
                    </div>
                  </div>
                  <h5>['spam', 'eggs', 123, 1234]</h5>
                </div>
      <!-- box area end -->
      <!-- box area -->
        <div class="row">
                  <div class="col-md-6">
                  <li class="active">리스트 원소에 대한 슬라이스 치환</a></li>
                    <div class="well">
                      <p>a = ['spam', 'eggs', 123, 1234]</p>
                      <p>a[0:2] = [1,12]      # 동일한 크기에 대한 슬라이스 치환</p>
                      <p>print a</p>
                      <p></p>
                      <p>a[0:2] = [1]         # 서로 다른 크기에 대한 슬라이스 치환</p>
                      <p>print a</p>
                      <p></p>
                      <p>a[0:1] = [1, 2, 3]   # 서로 다른 크기에 대한 슬라이스 치환</p>
                      <p>print a</p>
                    </div>
                  </div>
                  <h5>[1, 12, 123, 1234]</h5>
                  <h5>[1, 123, 1234]</h5>
                  <h5>[1, 2, 3, 123, 1234]</h5>
                </div>
      <!-- box area end -->
      <!-- box area -->
        <div class="row">
                  <div class="col-md-6">
                  <li>중첩 리스트: 리스트 안에 요소로서 리스트를 지닌 리스트</li>
                    <div class="well">
                      <p>s = [1, 2, 3]</p>
                      <p>t = ['begin', s, 'end']</p>
                      <p>print t</p>
                      <p></p>
                      <p>print t[1][1]</p>
                    </div>
                  </div>
                  <h5>['begin', [1, 2, 3], 'end']</h5>
                  <h5>2</h5>
                </div>
      <!-- box area end -->
      <h2>02 중첩 리스트(nested lists)</h2>
      <!-- box area -->
        <div class="row">
                  <div class="col-md-6">
                  <li> del을 이용한 리스트 요소 삭제</li>
                    <div class="well">
                      <p>a = [1, 2, 3, 4]</p>
                      <p>del a[0]</p>
                      <p>print a</p>
                      <p></p>
                      <p>del a[1:]</p>
                      <p>print a</p>
                    </div>
                  </div>
                  <h5>[2, 3, 4]</h5>
                  <h5>[2]</h5>
                </div>
      <!-- box area end -->
      <!-- box area -->
        <div class="row">
                  <div class="col-md-6">
                    <div class="well">
                      <p>s[1] = 100</p>
                      <p>print t</p>
                    </div>
                  </div>
                  <h5>['begin', [1, 100, 3], 'end']</h5>
                </div>
      <!-- box area end -->
      <h2>03 리스트의 메쏘드들</h2>
      <!-- box area -->
        <div class="row">
                  <div class="col-md-6">
                  <li><h4> 3-1 리스트의 메소드</h3></li>
                    <div class="well">
                      <p>s = [1, 2, 3]</p>
                      <p></p>
                      <p>s.append(5)             # 리스트 맨 마지막에 정수 값 5 추가</p>
                      <p>print s</p>
                      <p></p>
                      <p>s.insert(3, 4)          # 3 인덱스 위치에 정수 값 4 추가</p>
                      <p>print s</p>
                    </div>
                  </div>
                  <h5>[1, 2, 3, 5]</h5>
                  <h5>[1,2,3,4,5]</h5>
                </div>
      <!-- box area end -->
      <!-- box area -->
        <div class="row">
                  <div class="col-md-6">
                  <li><h4>3-2 리스트를 스택(Stack)으로 쓰기</h4></li>
                    <div class="well">
                      <p>s = [10, 20, 30, 40, 50]</p>
                      <p>s.append(60)</p>
                      <p>print s</p>
                      <p></p>
                      <p>print s.pop()</p>
                      <p></p>
                      <p>print s</p>
                    </div>
                  </div>
                  <h5>[10, 20, 30, 40, 50, 60]</h5>
                  <h5>60</h5>
                  <h5>[10, 20, 30, 40, 50]</h5>
                  <img src="http://geoncheollee.github.io/geonblog/images/stack.png" alt="stack.png"class="author-photo">
                </div>
      <!-- box area end -->
    </div>
  </div>
    <!-- END BEGIN STYLE CUSTOMIZER --> 

<div class="row">
    <!-- BEGIN PRE-FOOTER -->
    <div class="pre-footer">
      <div class="container">
        <div class="row">
          <!-- BEGIN TWITTER BLOCK --> 
          <div class="col-md-4 col-sm-6 pre-footer-col">
            <h2 class="margin-bottom-0">리스트 관련사이트</h2>
            <a class="twitter-timeline" href="http://link.koreatech.ac.kr/courses/2014_2/SP/SP20142.html" data-tweet-limit="2" data-theme="dark" data-link-color="#57C8EB" data-widget-id="455411516829736961" data-chrome="noheader nofooter noscrollbar noborders transparent">linklab.relative_python</a>
          </div>
          <!-- END TWITTER BLOCK -->
        </div>
      </div>
    </div>
    <!-- END PRE-FOOTER -->

    <!-- BEGIN FOOTER -->
    <div class="footer">
      <div class="container">
        <div class="row">
          <!-- BEGIN COPYRIGHT -->
          <div class="col-md-6 col-sm-6 padding-top-10">
            2014 © ComputerSystemBasicDesign SLH TEAM. ALL Rights Reserved.
          </div>
          <!-- END COPYRIGHT -->

        </div>
      </div>
    </div>
    <!-- END FOOTER -->

    <!-- Load javascripts at bottom, this will reduce page load time -->
    <!-- BEGIN CORE PLUGINS (REQUIRED FOR ALL PAGES) -->
    <!--[if lt IE 9]>
    <script src="../../assets/global/plugins/respond.min.js"></script>
    <![endif]--> 
    <script src="../../assets/global/plugins/jquery.min.js" type="text/javascript"></script>
    <script src="../../assets/global/plugins/jquery-migrate.min.js" type="text/javascript"></script>
    <script src="../../assets/global/plugins/bootstrap/js/bootstrap.min.js" type="text/javascript"></script>      
    <script src="../../assets/frontend/layout/scripts/back-to-top.js" type="text/javascript"></script>
    <!-- END CORE PLUGINS -->

    <!-- BEGIN PAGE LEVEL JAVASCRIPTS (REQUIRED ONLY FOR CURRENT PAGE) -->
    <script src="../../assets/global/plugins/fancybox/source/jquery.fancybox.pack.js" type="text/javascript"></script><!-- pop up -->
    <script src="../../assets/frontend/layout/scripts/layout.js" type="text/javascript"></script>
    <script type="text/javascript">
        jQuery(document).ready(function() {
            Layout.init();
            Layout.initTwitter();
        });
    </script>
    <!-- END PAGE LEVEL JAVASCRIPTS -->
</body>
<!-- END BODY -->
</html>
