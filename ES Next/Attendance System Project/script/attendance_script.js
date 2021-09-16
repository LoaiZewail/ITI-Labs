// nav bar
function myFunction() {
    var x = document.getElementById("myLinks");
    if (x.style.display === "block") {
        x.style.display = "none";
    } else {
        x.style.display = "block";
    }
    }
//buttons location
    function openhome(){
        window.location.replace("home.html","");
    }
    
    function openprofile(){
        window.location.replace("profile.html","");
    }
    
    function openattendance(){
        window.location.replace("attendance.html","");
    }
    function conatt(event) {
        if(document.forms[0]["validationCustom01"].value==""){
            event.preventDefault();
            event.stopPropagation();
            document.getElementById("vspan").style.display = "block";
        }
        else{
            document.forms[0].submit();
            document.forms[0]["validationCustom01"].value="";
            document.getElementById("vspan").style.display = "none";
        }
    }
//current date
    var today = new Date();
    var time = today.getHours() + ":" + today.getMinutes() + ":" + today.getSeconds();
    var empodate = this.document.getElementById("ff")
    empodate.value = time;
    