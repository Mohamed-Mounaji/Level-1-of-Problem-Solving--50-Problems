#include <iostream>
using namespace std;

string ReadPin()
{
    string Pin;
    cout << "Enter your PIN: ";
    cin >> Pin;
    return Pin;
}

bool Login()
{
    int Atempts = 3;
    string PinCode;

    do
    {
        Atempts--;
        PinCode = ReadPin();

        if (PinCode == "1234")
            return 1;
        else
        {
            if (Atempts == 0)
                break;
            system("Color 4F");
            cout << "Wrong Code Pin, You still have " << Atempts << " atempts.\n";
        }
    } while (Atempts >= 1);
    return 0;
}

int main()
{
    if (Login())
    {
        system("Color 2F");
        cout << "Your balance is : 7500";
    }
    else
        cout << "Your card is blocked, contact the bank to get help. ";

    return 0;
}

