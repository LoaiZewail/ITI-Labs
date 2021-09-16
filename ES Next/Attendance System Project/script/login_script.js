
//style
setTimeout(() => {
        $(".mainform").css("opacity", "1").fadeIn(9000);
    }, 500);
//buttons location
        function openlogin() {
        openedwindow= window.location.replace("home.html", "");
        }

        function goback() {
            openedwindow= window.location.replace("index.html", "");
        }
//form validation
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
                        })()

//Only one authorized employee can login in

                        $("form").submit(function(event){
                            if (
                                document.getElementById("validationCustom01").value=="nasrk" &&
                                document.getElementById("validationCustom02").value=="123"
                            ) {
                                
                                openedwindow= window.open("home.html", "");
                            }
                            event.preventDefault();
                        });

