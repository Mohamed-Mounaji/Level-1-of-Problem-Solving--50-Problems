#include <iostream>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}

int SumAllEnteredNums()
{
	int Sum = 0;
	int Number = 0;
	int Counter = 1;

	do
	{
		Number =  ReadNumber("Please enter number " + to_string(Counter) + ": ");
		if (Number == -99)
			break;

		Sum += Number;
		Counter++;
		
	} while (Number != -99);
	return Sum;
}

int main()
{
	
	cout << "The Sum: " << SumAllEnteredNums();
}