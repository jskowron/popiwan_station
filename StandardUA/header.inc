#encoding UTF-8
#errorCatcher Echo
##
## Specifying an encoding of UTF-8 is usually safe, but if your text is
## actually in Latin-1, then you should replace the string "UTF-8" with "latin-1"
## If you do this, you should also change the 'Content-Type' metadata below.

##
<!DOCTYPE HTML PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
  <head profile="http://www.w3.org/2005/10/profile">
    ## This choice should match the #encoding directive above
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <title>$station.location Monthly weather summary</title>
    <link rel="stylesheet" type="text/css" href="weewx.css"/>
    <link rel="icon" type="image/png" href="favicon.ico" />
    <script type="text/javascript">
      function openURL(urlname)
      {
        window.location=urlname;
      }
    </script>
  </head>

  <body>

      <div id="masthead">

    <div id="haedr1">



    <img src="backgrounds/logo.png" align="left" height="145" width="145"
    alt="Logo">

     </div>

     <div id="haedr2">

     <img src="backgrounds/images.jpeg" align="right" height="145" width="200"
     alt="obserwatorium">

       </div>



    <a href='index.html'>Головна</a>

    <a href='history.html'>Історія & Графіки</a>

    <a href='links.html'>Посилання</a>

    <a href='../StandardEN/index.html'>EN</a>

    <a href='index.html'>UA</a>

        <h2>Піп Іван, Україна</h2>
        <h2>$current.dateTime</h2>



      </div>


    </body>

    </html>
