#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
	float Number;
	cout << Message;
	cin >> Number;
	return Number;
}

float AddServiceFee(float BillValue)
{
	return  BillValue * 1.1;
}

float AddSalesTax(float BillValue)
{
	return BillValue * 1.16;
}

void PrintTheBill(float BillValue)
{
	cout << "The total bill is: " << BillValue << endl;

	cout << "The total after adding service fee: " << AddServiceFee(BillValue) << endl;

	cout << "The total after adding service fee and sales tax: " << AddSalesTax(AddServiceFee(BillValue));

}

int main()
{
	float BillValue = ReadNumber("Enter the bill value: ");

	PrintTheBill(BillValue);

	


	return 0;
}