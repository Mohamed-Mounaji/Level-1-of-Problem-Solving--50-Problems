//how much you must pay per months to pay back your loan.

#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

float MonthlyPayment(float LoanAmount, float TotalMonths)
{
	return LoanAmount / TotalMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Enter the loan amount: ");
	float TotalMounths = ReadPositiveNumber("Enter the number of months you want to devide you loan on: ");

	cout << "You need to pay each month " << MonthlyPayment(LoanAmount, TotalMounths);	

	return 0;
}