//animation style
var st="Attendance System"
var i=0
function dschar(){
    document.getElementById("alarmmsg").innerHTML+=(st.charAt(i))
    i++;
    if (i>=st.length){
        clearInterval(t)
    }
}
var t=setInterval(dschar,300);

//button location
function openchildfun() {
    openedwindow= window.location.replace("pages/index.html", "");
    }

// setTimeout(function(){
//     document.getElementsByClassName("mainform")[0].style.display="block"
// }, 6000);
