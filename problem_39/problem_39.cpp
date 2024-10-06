#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

float CalculateChange(float CashPaid, float TotalPrice)
{
	return CashPaid - TotalPrice;
}

int main()
{
	float TotalPrice = ReadNumber("Enter the total price: "), CashPaid = ReadNumber("Enter the cash that is paid: ");
	
	cout << "The change: " << CalculateChange(CashPaid, TotalPrice);
	return 0;
}