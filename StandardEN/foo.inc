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
    <div id="container">
      <div id="navbar">
        <p align="left" >Weewx uptime:  $station.uptime<br/>
           Server uptime: $station.os_uptime<br/>
           weewx v$station.version</p>
        <div align="center" >Created by Volodymyr Marusiak. ©2017-2018.</div>
      </div>


      </div>

    </body>

    </html>
