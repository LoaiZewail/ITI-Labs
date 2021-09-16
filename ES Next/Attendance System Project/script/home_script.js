// nav bar
        function myFunction() {
            var x = document.getElementById("myLinks");
            if (x.style.display === "block") {
                x.style.display = "none";
            } else {
                x.style.display = "block";
            }
            }
// buttons location
            function openhome(){
                window.location.replace("home.html","");
            }
    
            function openprofile(){
                window.location.replace("profile.html","");
            }
    
            function openattendance(){
                window.location.replace("attendance.html","");
            }