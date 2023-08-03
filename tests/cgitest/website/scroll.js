var scroll = true;
var num = 0;

scrollStatus();
scrollButton();

function scrollStatus() {
         var statusText = "";
         var statusChars = new Array(' ', 'S', 'c', 'r', 'i', 'p', 't', ' ', 'B', 'y', ' ', 'P', 'y', 'r', 'o', 'B', 'r', 'i', 'a', 'n', '@', 'h', 'o', 't', 'm', 'a', 'i', 'l', '.', 'c', 'o', 'm');
         for (var l = 0; l < 1; l++) {
                 for (var a = num; a < statusChars.length; a++)
                         statusText += statusChars[a];
                 for (var b = 0; b < num; b++)
                         statusText += statusChars[b];
                 }
         window.status = statusText;
         num++;
         if (num >= statusChars.length)
                 num = 0;
         if (scroll) {
                 setTimeout("scrollStatus()",100);
                 }
         }

 function scrollButton() {
         var buttonChars = new Array('S', 't', 'o', 'p', ' ', 'S', 'c', 'r', 'o', 'l', 'l', 'i', 'n', 'g', ' ', ' ');
         var buttonText = "";
         for (var a = num; a < buttonChars.length; a++)
                 buttonText += buttonChars[a];
         for (var b = 0; b < num; b++)
                 buttonText += buttonChars[b];
         num++;
         if (num >= buttonChars.length)
                 num = 0;
         document.form1.stopIt.value = buttonText;
         if (scroll) {
                 setTimeout("scrollButton();", 100);
                 }
         }