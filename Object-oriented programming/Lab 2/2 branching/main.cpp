#include <iostream>

using namespace std;

int main()
{   int m;
    cout << "Enter the student mark \n";
    cin >> m;
        if (m<50)
        cout << "Your grade is Fail";
        if (m>=50 && m<65)
        cout << "Your grade is Pass";
        if (m>=65 && m<80)
        cout << "Your grade is Good";
        if (m>=80 && m<90)
        cout << "Your grade is Very Good";
        if (m>=90)
        cout << "Your grade is Excellent";
    return 0;
}
