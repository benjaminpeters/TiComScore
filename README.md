# TiComScore

Consumers now spend the majority of their digital media time on mobile devices, making mobile more valuable 
than ever. comScore Mobile Metrix® captures total mobile audience behavior on browsers and apps across 
smartphones and tablets. With Mobile Metrix, publishers can demonstrate the value of their mobile
audiences, while agencies and advertisers can strategically plan and buy digital advertising on mobile 
platforms to achieve their campaign objectives.

This module connects your iOS and/or Android apps to [comScore](http://www.comscore.com/) in a Titanium Appcelerator Application.

## Usage

1. Register your account with [comScore](http://www.comscore.com/), once done retrieve your C2 Value and publisher secret codes.

2. Follow [these](http://docs.appcelerator.com/platform/latest/#!/guide/Using_a_Module) instructions to install the module.

3. To access this module from JavaScript, you need to do the following:

```javascript
var TiComscore = require('com.benjamin.comscore');
TiComscore.startComScore("put C2 Value here", "put publisher secret code here");
```

TEST HARNESS EXAMPLE FOR YOUR MODULE
------------------------------------

The `example` directory contains a skeleton application test harness that can be
used for testing and provides an example of usage


BUILDING YOUR MODULE
--------------------

Simply run `titanium build --platform <name of platform> --build-type production --dir /path/to/module`.
You can omit the --dir option if your working directory is in the module's project directory.


TESTING YOUR MODULE
-------------------

To test with the script, execute:

titanium run --dir=YOURMODULEDIR

This will execute the app.js in the example folder as a Titanium application.
