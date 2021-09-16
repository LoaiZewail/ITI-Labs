import Rectangle  from './rectangleModule';
export default class Square extends Rectangle {
    constructor(_Dim1,_Dim2,_Color,_Dim3,_Dim4) {
        super(_Dim1,_Dim2,_Color,_Dim3,_Dim4);
    }
    Print() {
        return `${super.Print()}`;
    }
    Calcarea() {
        return `${super.Calcarea()}`;
    }
}