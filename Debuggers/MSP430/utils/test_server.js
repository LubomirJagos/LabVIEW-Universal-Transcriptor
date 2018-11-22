// Import the TestServer code
load(java.lang.System.getenv("SCRPITING_ROOT") + "/examples/TestServer/TestServer.js");

/* Details of the board configuration.  */
board_configuration = {
  configFile:	"msp430f5529.ccxml",
     timeout:	150000,
     logFile:	"test_server.xml",
    sessions:	[
                    {
                        name:	".*",
                    },
                ],
};

/* Start the server, for the sessions start using TCP/IP ports from 4444.  */
var server = new TestServer(board_configuration, 4444);
/* Add some custom command handlers, which enable customer to adapt this
   their specific needs.  */
var commands = {
	"custom_cmd": customCommandHandler,
	"bug_cmd": bugCommandHandler, /* this is not a function and should report an error when trying to add among list of handlers */
};
server.addHandlers(commands);
/* Run and wait for completion of the TestServer.  */
server.run();
server.shutdown();

java.lang.System.exit(0);

function customCommandHandler(session, command) {
	/* get the session timeout value. */
	var timeoutVal = session.getScriptTimeout();
		
	return { "status": "OK", "message": "custom_cmd: timeout value is " + timeoutVal };
}

var bugCommandHandler;
