        import Shape  from './shapeModule'
        export default class Rectangle extends Shape.Shape {
            // #Dim1=1;
            // #Dim2=1;
            // #Dim3=1;
            // #Dim4=1;
            constructor(_Dim1,_Dim2,_Color,_Dim3,_Dim4) {
                super(_Dim1,_Dim2,_Color);
                this.#Dim3 = _Dim3;
                this.#Dim4 = _Dim4;
            }

            // set Dim3(_Dim3) {
            //     if (_Dim3 >= 1 && _Dim3 <= 20) {
            //         this.#Dim3 = _Dim3;
            //     }
            //     else { this.#Dim3 = 1; }
            // }

            // get Dim3() {
            //     return this.#Dim3;
            // }
            
            // set Dim4(_Dim4) {
            //     if (_Dim4 >= 1 && _Dim4 <= 20) {
            //         this.#Dim4 = _Dim4;
            //     }
            //     else { this.#Dim4 = 1; }
            // }

            // get Dim4() {
            //     return this.#Dim4;
            // }
            
            Print() {
                return `${super.Print()} , Dim3 =  ${this.#Dim3} , Dim4 = ${this.#Dim4}`;
            }

            Calcarea() {
                return `${this.#Dim1*this.#Dim2}`;
            }
        }


