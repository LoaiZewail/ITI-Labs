
//style

// setTimeout(() => {
//         $(".mainform").css("opacity", "1").fadeIn(9000);
//     }, 500);

//buttons location

        function goback() {
            openedwindow= window.location.replace("index.html", "");
        }

        function doallemp() {
            $(".allemp").css("display", "block");
            $(".fullrep").css("display", "none");
            $(".laterep").css("display", "none");
            $(".excrep").css("display", "none");
            disallemp();
        }
        function dofullrep() {
            $(".allemp").css("display", "none");
            $(".fullrep").css("display", "block");
            $(".laterep").css("display", "none");
            $(".excrep").css("display", "none");
            disfullrep();
        }

        function dolaterep() {
            $(".allemp").css("display", "none");
            $(".fullrep").css("display", "none");
            $(".laterep").css("display", "block");
            $(".excrep").css("display", "none");
            dislaterep();
        }

        function doexcrep() {
            $(".allemp").css("display", "none");
            $(".fullrep").css("display", "none");
            $(".laterep").css("display", "none");
            $(".excrep").css("display", "block");
            disexcrep();
        }

//ajax call to get employee data

    function disallemp(){ 

    var firstdev = this.document.getElementsByClassName("allemp")[0];
    var firsttable = this.document.getElementsByClassName("table1")[0];
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
                // console.log(jsobject[0])
                for (var i = 0; i < jsobject.length; i++) {
                    // create tr
                    var createdtr = document.createElement('tr');
                    for (var data in jsobject[i]) {
                        var td = document.createElement('td');
                        td.innerText = jsobject[i][data];
                        // console.log(jsobject[0][data])
                        createdtr.appendChild(td);
                    }
                    firsttable.appendChild(createdtr);
                }
                firstdev.appendChild(firsttable);
            }
        }
    };//end of event on readystatechange
    xhr.open("GET", "../JSON/empdata.json", true);
    xhr.send("");
};

//ajax call to display full report

    function disfullrep(){  // NEED REFACTORING

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
};

//ajax call to get late report

function dislaterep(){

    var thirddev = this.document.getElementsByClassName("laterep")[0];
    var thirdtable = this.document.getElementsByClassName("table3")[0];
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

                var vlate =0;
                
                for (var i = 0; i < jsobject.length; i++) {

                    // console.log(jsobject[i].userName)

                    var createdtr = document.createElement('tr');

                    var tdname = document.createElement('td');

                    var tdlate = document.createElement('td');

                    tdname.innerText = jsobject[i].userName;

                    createdtr.appendChild(tdname);

                    createdtr.appendChild(tdlate);

                    // console.log(jsobject[i].reports)

                            for (var data in jsobject[i].reports) {

                                vlate=vlate+jsobject[i].reports[data].late;

                                thirdtable.appendChild(createdtr);

                            }
                
                tdlate.innerText = vlate;

                thirddev.appendChild(thirdtable);
            }
            }//end of status 200
        }// end of readystate 4
    };//end of event on readystatechange
    xhr.open("GET", "../JSON/reports.json", true);
    xhr.send("");
};

//ajax call to get excuse report

function disexcrep(){

    var forthdev = this.document.getElementsByClassName("excrep")[0];
    var forthtable = this.document.getElementsByClassName("table4")[0];
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

                var vexcuse =0;
                
                for (var i = 0; i < jsobject.length; i++) {

                    // console.log(jsobject[i].userName)

                    var createdtr = document.createElement('tr');

                    var tdname = document.createElement('td');

                    var tdexcuse = document.createElement('td');

                    tdname.innerText = jsobject[i].userName;

                    createdtr.appendChild(tdname);

                    createdtr.appendChild(tdexcuse);

                    // console.log(jsobject[i].reports)

                            for (var data in jsobject[i].reports) {

                                vexcuse=vexcuse+jsobject[i].reports[data].late;

                                forthtable.appendChild(createdtr);

                            }
                
                tdexcuse.innerText = vexcuse;

                forthdev.appendChild(forthtable);
            }
            }//end of status 200
        }// end of readystate 4
    };//end of event on readystatechange
    xhr.open("GET", "../JSON/reports.json", true);
    xhr.send("");
};
