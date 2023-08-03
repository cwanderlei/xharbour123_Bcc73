

function userWinOpen()
{
 var oWin= new window();
 oWin.open( '/cgi-bin/userform.exe?GETUSER', "userWindow",'resizable=0,directories=0,toolbar=0,scrollbars=0,location=0,menubar=0,status=1' );
 return oWin;
}
