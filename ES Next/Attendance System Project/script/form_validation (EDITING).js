
        window.addEventListener('load', function () {
                efname = document.getElementById('validationCustom01');
                elname = document.getElementById('validationCustom02');
                eaddress = document.getElementById('validationCustom03');
                eemail = document.getElementById('validationCustom04');
                eage = document.getElementById('validationCustom05');
    
                efname.focus();
    
                // validate fname
                efname.addEventListener('blur', function () {
                    if (!isefnamevalid()) {
                        efname.focus();
                        efname.select();
                        efname.className = 'invalid-feedback';
                    } else {
                        efname.className = 'valid-feedback';
                    }
                });//end of fname validator

                // validate lname
                elname.addEventListener('blur', function () {
                    if (!iselnamevalid()) {
                        elname.select();
                        elname.className = 'invalid-feedback';
                        elname.focus();
                    } else {
                        elname.className = 'valid-feedback';
                    }
                });//end of lname validator

                // validate address
                eaddress.addEventListener('blur', function () {
                    if (!isaddressvalid) {
                        eaddress.focus();
                        eaddress.select();
                        eaddress.className = 'invalid-feedback';
                    } else {
                        eaddress.className = 'valid-feedback';
                    }
                });//end of address validator

                // validate email
                eemail.addEventListener('blur', function () {
                    if (!isuseremailvalid()) {
                        eemail.focus();
                        eemail.select();
                        eemail.className = 'invalid-feedback';
                    } else {
                        eemail.className = 'valid-feedback';
                    }
                });//end of email validator

                // validate age
                eage.addEventListener('blur', function () {
                    if (!isagevalid()) {
                        eage.focus();
                        eage.select();
                        eage.className = 'invalid-feedback';
                    } else {
                        eage.className = 'valid-feedback';
                    }
                });//end of age validator
        
                    // Fetch all the forms we want to apply custom Bootstrap validation styles to
                    // var forms = document.querySelectorAll('.needs-validation')
                    // // Loop over them and prevent submission
                    // Array.prototype.slice.call(forms)
                    //     .forEach(function (form) {
                    //     form.addEventListener('submit', function (event) {
                    //         if ( ! (isfnamevalid() && islnamevalid() && isuseremailvalid() && isaddressvalid() && isagevalid()) ) {
                    //         event.preventDefault()
                    //         event.stopPropagation()
                    //         }
            
                    //         form.classList.add('was-validated')
                    //     }, false)
                    //     })

                        // submit event
                    
                    document.forms[0].addEventListener('submit', function (data) {
                        if (!(isfnamevalid() && islnamevalid() && isuseremailvalid() && isaddressvalid() && isagevalid())) {
                            //prevnet default
                            data.preventDefault();
                        }
                        if (!isfnamevalid()){
                            efname.className = 'invalid-feedback';
                            efname.focus();
                            efname.select();
                        }
                        if (!iselnamevalid()){
                            elname.className = 'invalid-feedback';
                            elname.focus();
                            elname.select();
                        }
                        if (!iseaddressvalid()){
                            eaddress.className = 'invalid-feedback';
                            eaddress.focus();
                            eaddress.select();
                        }
                        if (!isuseremailvalid()){
                            eemail.className = 'invalid-feedback';
                            eemail.focus();
                            eemail.select();
                        }
                        if (!iseagevalid()){
                            eage.className = 'invalid-feedback';
                            eage.focus();
                            eage.select();
                        }
                    });//end of submit event

                        this.document.forms[0].addEventListener('reset', function (data) {
        
                            if (!confirm('Are You Sure You Want To Clear Your Form ?')) {
                                data.preventDefault();
                            }
                        });
            
                        window.oncontextmenu = function (e) { alert("You Can't Display Context Menu !"); e.preventDefault(); }
                    });
            // })()

            function isfnamevalid() {
                var fnamepattern = /^\S+\w{8,32}\S{1,}/;
                return efname.value.match(fnamepattern);   
            }

            function islnamevalid() {
                var lnamepattern = /^\S+\w{8,32}\S{1,}/;
                return elname.value.match(lnamepattern);   
            }

            function isaddressvalid() {
                var addresspattern = /\d{1,4}[A-Z]?\s/;
                return eaddress.value.match(addresspattern);   
            }

            function isuseremailvalid() {
                var emailExpr = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;
                return eemail.value.match(emailExpr);   
            }

            function isagevalid() {
                if (age > 20 && age < 50)
                    return true;
            }