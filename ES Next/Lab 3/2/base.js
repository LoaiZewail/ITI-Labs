import Shape  from './shapeModule'
import Rectangle  from './rectangleModule';
import Square  from './squareModule';
import Triangle  from './triangleModule';


let rec1 = new Rectangle(5,5,"blue",5,5);
let sq1 = new Square(5,5,"blue",5,5);
let tri1 = new Triangle(5,5,"blue",5,5);

console.log(rec1);
console.log(sq1);
console.log(tri1);
console.log(Shape.counter);



export {rec1 , sq1 , tri1};
