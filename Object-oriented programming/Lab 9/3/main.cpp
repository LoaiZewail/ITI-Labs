#include <iostream>
using namespace std;


class Shape {
public:
    float x,y;
    void set_dim(float a, float b)
    {
        x = a;
        y = b;
    }
    virtual void Area()
    {
    }
} ;

class Triangle : public Shape
{
public:
    void Area()
    {
        cout << "Triangle Area = " << 0.5*x*y << endl;
    }
};

class Rectangle : public Shape
{
public:
    void Area()
    {
        cout << "Rectangle Area = " << x*y << endl;
    }
};

int main()
{
    string triangle;
    string rectangle;
    string s;
    int height,width;

    Shape *p;

    cout << "Enter shape name (Rectangle , Triangle): ";

    cin >> s;

    if (s =="triangle")
            {
            Triangle t;
            cout << "Width = ";
            cin >> width;
            cout << "Height=  ";
            cin >> height;
            p = &t;
            p->set_dim(height, width);
            p->Area();
            }
    else if (s =="rectangle")
            {
            Rectangle r;
            cout << "Width = ";
            cin >> width;
            cout << "Height= ";
            cin >> height;
            p = &r;
            p->set_dim(height, width);
            p->Area();
            }
    return 0;
}
