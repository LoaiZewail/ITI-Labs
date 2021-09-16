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

    //ajax call to get employee data

    window.addEventListener('load' , function(){

        var seconddev = this.document.getElementsByClassName("fullrep")[0];
        var secondtable = this.document.getElementsByClassName("table2")[0];
        //1- create XHR Object
        var xhr = new XMLHttpRequest();
        var res = "";
        // 2- register onreadystatechangeevent
        xhr.onreadystatechange = function () {
            //3- if(request complete dor not)
            if (xhr.readyState == 4) {
                //4- make sure request is successful reauest
                if (xhr.status == 200) {
                    // 5- read result suing responseText
                    res = xhr.responseText;
                    //console.log(res);
                    //console.log(res); // json
                    var jsobject = JSON.parse(res); // array
    
                    // console.log(jsobject)
                    // console.log(jsobject[0].reports)
                    // console.log(jsobject[0].reports[0])
                    // console.log(jsobject[0].reports[0].attendance)
    
                    var vattendance =0;
                    var vlate =0;
                    var vexcuse =0;
                    var vabsence =0;
                    
                    for (var i = 0; i < jsobject.length; i++) {
    
                        // console.log(jsobject[i].userName)
    
                        var createdtr = document.createElement('tr');
    
                        var tdname = document.createElement('td');
                        var tdattendance = document.createElement('td');
                        var tdlate = document.createElement('td');
                        var tdexcuse = document.createElement('td');
                        var tdabsence = document.createElement('td');
    
                        tdname.innerText = jsobject[i].userName;
    
                        createdtr.appendChild(tdname);
                        createdtr.appendChild(tdattendance);
                        createdtr.appendChild(tdlate);
                        createdtr.appendChild(tdexcuse);
                        createdtr.appendChild(tdabsence);
    
                        // console.log(jsobject[i].reports)
    
                                for (var data in jsobject[i].reports) {
                                    console.log(jsobject[i].reports[data].attendance)
                                    
                                    vattendance=vattendance+jsobject[i].reports[data].attendance;
                                    vlate=vlate+jsobject[i].reports[data].late;
                                    vexcuse=vexcuse+jsobject[i].reports[data].excuse;
                                    vabsence=vabsence+jsobject[i].reports[data].absence;
                                    secondtable.appendChild(createdtr);
                                }
                    
                    tdattendance.innerText = vattendance;
                    tdlate.innerText = vlate;
                    tdexcuse.innerText = vexcuse;
                    tdabsence.innerText = vabsence;
    
                    seconddev.appendChild(secondtable);
    
                    console.log(vattendance);
                    console.log(vlate);
                    console.log(vexcuse);
                    console.log(vabsence);
                }
                }//end of status 200
            }// end of readystate 4
        };//end of event on readystatechange
        xhr.open("GET", "../JSON/reports.json", true);
        xhr.send("");
    });
    
    //search

    $(function () {
            $(":text:first").keyup(function () {
            // $(this).val()
            var uservalue = $(this).val();
            $("tr:not(tr:first)").each(function () {
                //$(this)=> current iterated tr
                var currentvalue = $(this).children("td:first").text();
                if (currentvalue.toLowerCase() .indexOf(uservalue.toLowerCase()) != -1) {
                    //exist
                /*$(this).show(1000);*/
                    $(this).css("color", "green").fadeIn(1000);
                } else {
                    $(this).css("color","red").fadeOut(1000);
                }

            });//end of each for tr

        });//end of keyup

    });//end of load