#include <iostream>

using namespace std;

class Shape
{
public:
   Shape(int w, int h)
   {
       cout << "Shape width is : " << w << endl;
       cout << "Shape height is : " << h << endl;
   }
};


int main()

{
Shape box(5,5);
    return 0;
}
