            // form validation

            // Example starter JavaScript for disabling form submissions if there are invalid fields
            (function () {
                'use strict'
        
                // Fetch all the forms we want to apply custom Bootstrap validation styles to
                var forms = document.querySelectorAll('.needs-validation')
        
                // Loop over them and prevent submission
                Array.prototype.slice.call(forms)
                    .forEach(function (form) {
                    form.addEventListener('submit', function (event) {
                        if (!form.checkValidity()) {
                        event.preventDefault()
                        event.stopPropagation()
                        }
                        form.classList.add('was-validated')
                    }, false)
                    })

                    //reset button
                    forms[0].addEventListener('reset', function (data) {

                        if (!confirm('Are You Sure You Want To Clear Your Form ?')) {
                            data.preventDefault();
                        }
                    });
                })()

                //animation script

                setTimeout(() => {
                    $(".mainform").css("opacity", "1").fadeIn(9000);
                }, 500);
                
                //buttons location

                    function openlogin() {
                    openedwindow= window.location.replace("login.html", "");
                    }
                    function openadmin() {
                        openedwindow= window.location.replace("admin.html", "");
                        }

                //email random username and password (NEED REFACTORING)

                // function openregister(){
                //     var username = Math.floor(1000 + Math.random() * 9000);
                //     console.log(username);
                //     var password = Math.floor(1000 + Math.random() * 9000);
                //     console.log(password);
                //     window.open(`mailto:test@example.com?subject=subject&body= username: ${username} , password : ${password}`);
                // }

                //save entered form data to JSON file

                $("form").submit(function(event){
                        if ( $('.form-control:valid').length ) { // >>>>(NEED REFACTORING)<<<<
                            // openregister()
                            sendEmail()
                            var arrData=($(this).serializeArray()); // >>>> to use blob <<<<
                            console.log($(this).serializeArray());

                // blob to save employee entered data to JSON file
                            function saveData(){
                                var storeData = new Blob([JSON.stringify(arrData)],{ type:"application/json"});
                                var Linkelem = document.createElement("a");
                                Linkelem.href = window.webkitURL.createObjectURL(storeData);
                                Linkelem.setAttribute("download","empData.json");
                                document.body.appendChild(Linkelem);
                                Linkelem.click();
                                document.body.removeChild(Linkelem);
                            };
                            saveData();
                            event.preventDefault();
                            // openedwindow= window.open("login.html", "");
                        }
                    });



