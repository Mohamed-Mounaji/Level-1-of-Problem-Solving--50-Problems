// How many months you will need to pay back your loan

#include <iostream>
using namespace std;

float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

float TotalMonthsNeededToPayBackLoan(float LoanAmount, float MonthlyPayment)
{
	return LoanAmount / MonthlyPayment;
}

int main()
{
	float LoanAmount = ReadNumber("Enter Your loan amount: ");
	float MonthlyPayment = ReadNumber("Enter how much you will pay per month: ");


	cout << "You need " << TotalMonthsNeededToPayBackLoan(LoanAmount, MonthlyPayment) << " months.";

	return 0;
}