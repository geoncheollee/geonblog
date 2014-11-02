<!--TOP버튼 시작--> <script language=javascript>
<!--

var isDOM = (document.getElementById ? true : false); 
var isIE4 = ((document.all && !isDOM) ? true : false);
var isNS4 = (document.layers ? true : false);

function getRef(id) {
        if (isDOM) return document.getElementById(id);
        if (isIE4) return document.all[id];
        if (isNS4) return document.layers[id];
}

var isNS = navigator.appName == "Netscape";

function moveRightEdge() {

        var yMenuFrom, yMenuTo, yOffset, timeoutNextCheck;
        
        if (isNS4) {
                yMenuFrom   = divMenu.top;
                yMenuTo     = windows.pageYOffset + 405;   // 위쪽 위치
        } else if (isDOM) {
                yMenuFrom   = parseInt (divMenu.style.top, 10);
                yMenuTo     = (isNS ? window.pageYOffset +405 : document.body.clientHeight + document.body.scrollTop - 45 ); // 위쪽 위치
                if(!isNS) {
                        if( yMenuTo > document.body.scrollHeight - 250 ) yMenuTo = document.body.scrollHeight - 235;
                        if( yMenuTo < 65 ) yMenuTo = 65;
                }
        }
        
        timeoutNextCheck = 500;
        
        if (yMenuFrom != yMenuTo) {
                yOffset = Math.ceil(Math.abs(yMenuTo - yMenuFrom) / 10);
                if (yMenuTo < yMenuFrom)
                        yOffset = -yOffset;
                if (isNS4)
                        divMenu.top += yOffset;
                else if (isDOM)
                        divMenu.style.top = parseInt (divMenu.style.top, 10) + yOffset;
                        timeoutNextCheck = 10;
        }
        setTimeout ("moveRightEdge()", timeoutNextCheck);
}
//--> 
</script> 
