
            export default class Shape {
                #Dim1=1;
                #Dim2=1;
                #Color="Red";
                static counter=0;
                constructor(_Dim1,_Dim2,_Color) {
                    if (new.target.name == "Shape") {
                        throw "Abstract Class , You Can't Create An Object From It ...!!!!";
                    }
                    this.#Dim1 = _Dim1;
                    this.#Dim2 = _Dim2;
                    this.#Color = _Color;
                    Shape.counter++;
                }
    
                set Dim1(_Dim1) {
                    if (_Dim1 >= 1 && _Dim1 <= 20) {
                        this.#Dim1 = _Dim1;
                    }
                    else { this.#Dim1 = 1; }
                }
                get Dim1() {
                    return this.#Dim1;
                }
    
                set Dim2(_Dim2) {
                    if (_Dim2 >= 1 && _Dim2 <= 20) {
                        this.#Dim2 = _Dim2;
                    }
                    else { this.#Dim2 = 1; }
                }
                get Dim2() {
                    return this.#Dim2;
                }
    
                set Color(_Color) {
                    if (_Color.length >= 3) {
                        this.#Color = _Color;
                    }
                    else { this.#Color = "Red"; }
                }
    
                get Color() {
                    return this.#Color;
                }
    
                Print() {
                    return `Dim1 = ${this.#Dim1} , Dim2 = ${this.#Dim2} , Color = ${this.#Color}`;
                }
    
                Calcarea() {
                    return `${this.#Dim1*this.#Dim2}`;
                }
    
            };