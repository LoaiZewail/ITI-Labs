#include <iostream>

using namespace std;

int main()
{
    float amount;
    float amount_in_coins;
    int coin_50,coin_25,coin_10,coin_5,coin_1;

    cout << "Enter amount in L.E: ";
    cin >> amount;
    amount_in_coins=amount*100;

    coin_50=amount_in_coins/50;
    coin_25=(amount_in_coins-(coin_50*50))/25;
    coin_10=(amount_in_coins-(coin_50*50)-(coin_25*25))/10;
    coin_5=(amount_in_coins-(coin_50*50)-(coin_25*25)-(coin_10*10))/5;
    coin_1=amount_in_coins-(coin_50*50)-(coin_25*25)-(coin_10*10)-(coin_5*5);

    cout << "50 .. " << coin_50 << endl;
    cout << "25 .. " << coin_25 << endl;
    cout << "10 .. " << coin_10 << endl;
    cout << "5 .. " << coin_5 << endl;
    cout << "1 .. " << coin_1 << endl;
    return 0;
}
