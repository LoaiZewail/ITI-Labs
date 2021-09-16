        import Shape  from './shapeModule'
        export default class Triangle extends Shape.Shape {
            // #Dim1=1;
            // #Dim2=1;
            // #Dim3=1;
            constructor(_Dim1,_Dim2,_Color,_Dim3) {
                super(_Dim1,_Dim2,_Color);
                this.#Dim3 = _Dim3;
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

            Print() {
                return `${super.Print()} , Dim3 =  ${this.#Dim3}`;
            }

            Calcarea() {
                return `${.5*(((this.#Dim1+this.#Dim2+this.#Dim3)/2)*(((this.#Dim1+this.#Dim2+this.#Dim3)/2)-this.#Dim1)*(((this.#Dim1+this.#Dim2+this.#Dim3)/2)-this.#Dim2)*(((this.#Dim1+this.#Dim2+this.#Dim3)/2)-this.#Dim3))}`;
            }
        }
