#include <iostream>

using namespace std;

class Mother
{
    public:
    void display()
    {
        cout << "I'm the mother !" << endl;
    }
};
class Daughter : public Mother
{
    public:
    void display()
    {
        cout << "I'm the daughter !" << endl;
    }
};

int main()
{
    Daughter soso;
    soso.display();
    return 0;
}
