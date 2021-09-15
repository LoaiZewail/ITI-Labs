#include <iostream>

using namespace std;

int main()
{
    float Lenth;
    float Width;
    float Area;
    cout << "Enter the lenth of the rectangle \n";
    cin >> Lenth;
    cout << "Enter the width of the rectangle \n";
    cin >> Width;
    Area = Lenth*Width;
    cout << "The Area of the rectangle = " << Area;
    return 0;
}
