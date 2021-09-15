#include <iostream>

using namespace std;

class truck; //forward reference
class car
{
    int speed;
    int passengers;
public:
    car (int s, int p){speed=s;passengers=p;}
    friend int sp_greater(car c , truck t);

};

class truck
{
    int speed;
    int weight;
public:
    truck(int s, int w){speed=s;weight=w;}
    friend int sp_greater(car c , truck t);
};

    int sp_greater(car c , truck t)
    {
        return c.speed-t.speed;
    };

int main()
{
    int t;
    car c1(180,4);
    truck t1(200,400);

    t = sp_greater(c1,t1);
    if (t<0)
        cout << "Truck is faster" << endl;
    else if (t==0)
        cout << "Equal speed" << endl;
    else
        cout << "Car is faster" << endl;
    return 0;
}
