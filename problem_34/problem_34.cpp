#include <iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Enter the total sales: ";
	cin >> Number;

	return Number;

}

float GetPercentage(int TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;

	else if (TotalSales >= 500000)
		return 0.02;

	else if (TotalSales >= 100000)
		return 0.03;

	else if (TotalSales >= 50000)
		return 0.05;

	else
		return 0;
}

float GetTotalComission(int TotalSales)
{
	return TotalSales * GetPercentage(TotalSales);
}


int main()
{
	int TotalSales = ReadNumber();
	
	cout << "Total comission is: " << GetTotalComission(TotalSales);

}