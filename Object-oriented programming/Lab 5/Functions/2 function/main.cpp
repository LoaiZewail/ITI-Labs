#include <iostream>

using namespace std;

string name;

void say_hello(string name);

int main()
{
    cout << "What is your name ?" << endl;
    cin >> name;

    say_hello(name);

    return 0;
}

void say_hello(string name)
{
    cout<<"Hello "<< name << " !" << endl;
}
