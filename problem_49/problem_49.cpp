#include <iostream>
using namespace std;

string ReadPin()
{
	string Pin;
	cout << "Enter the code PIN: ";
	cin >> Pin;

	return Pin;
}

bool Login()
{
	string Pin;
	do
	{
		Pin = ReadPin();

		if (Pin == "1234")
			return true;
		else
		{
			system("Color 4F");
			cout << "Wrong PIN!!!\n";
		}
	} while (Pin != "1234");
}

int main()
{
	
	if (Login())
	{
		system("Color 2F");
		cout << "Your Balance is: 7500\n";
	}

}