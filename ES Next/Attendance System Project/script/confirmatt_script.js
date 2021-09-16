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
    
    function closew(){
        window.close();
    }

    //get values entered

    var firstf = document.getElementById("validationCustom01");
    var secondf = document.getElementById("validationCustom02")
    
    ////
    var hrefvalue = location.search;//"?empname=Ibraheem&attime=khaled"
            /*var userinputs = hrefvalue.substring(hrefvalue.indexOf("?") + 1)*/
            var userinputs = hrefvalue.substring(1)
            console.log(userinputs);//empname=nasr&attime=TIME"
            var userpairs = userinputs.split("&");
            //["empname=ahmed","attime=TIME"]
            for (var i = 0; i < userpairs.length; i++) {
                var splitedpairs = userpairs[i].split("=");//["empname","ahmed"]
                if (splitedpairs[0].toLowerCase() == "empname") {
                    var ffield = splitedpairs[1];}else{
                        var sfield = splitedpairs[1]
                    }
    
                }
    ////
    var today = new Date();
    var sfield = today.toLocaleString('en-US', { hour: 'numeric', minute: 'numeric', hour12: true });
    
    firstf.value= ffield;
    secondf.value= sfield;