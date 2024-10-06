#include <iostream>
using namespace std;

struct strCoins 
{
	int Penny, Nickel, Dime, Quarter, Dollar;
};

strCoins ReadCoins()
{
	strCoins Coins;

	cout << "Enter the sum of pennies: ";
	cin >> Coins.Penny;

	cout << "Enter the sum of nickels: ";
	cin >> Coins.Nickel;

	cout << "Enter the sum of dimes: ";
	cin >> Coins.Dime;

	cout << "Enter the sum of quarters: ";
	cin >> Coins.Quarter;

	cout << "Enter the sum of dollars: ";
	cin >> Coins.Dollar;

	return Coins;
}

int GetTotalInPenny(strCoins Coins)
{
	return Coins.Penny + Coins.Nickel * 5 + Coins.Dime * 10 + Coins.Quarter * 25 + Coins.Dollar * 100;

}

float GetTotalInDollar(strCoins Coins)
{
	return (float)GetTotalInPenny(Coins) / 100;
}

int main()
{
	strCoins UserCoins = ReadCoins();

	cout << "The total: " << GetTotalInDollar(UserCoins) << " Dollars.\n";
	cout << "The total: " << GetTotalInPenny(UserCoins) << " Pennies.";


	return 0;	
}
