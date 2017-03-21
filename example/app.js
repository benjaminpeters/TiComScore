// This is a test harness for your module
// You should do something interesting in this harness
// to test out the module and to provide instructions
// to users on how to use it by example.

// This line will setup and contact comscore.
// Nothing else is required
require('com.benjamin.comscore').start();

// open a single window
var win = Ti.UI.createWindow({
	backgroundColor:'white'
});
var label = Ti.UI.createLabel();
win.add(label);

var TiComscore = require('com.benjamin.comscore');
TiComscore.startComScore("put C2 Value here", "put publisher secret code here");

win.open();


