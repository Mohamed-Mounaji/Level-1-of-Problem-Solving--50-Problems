#include <iostream>
#include <string>;
#include <cmath>;

using namespace std;

enum enPrimeOrNot {Prime=1, NotPrime};

int ReadNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 1);

	return Number;
}

enPrimeOrNot CheckPrimOrNot(int Number)
{
	int Counter = 2;
	int M = ceil(Number/2);

	if (Number == 1)
		return enPrimeOrNot::NotPrime;

		for (Counter; Counter <= M; Counter++)
		{
			if (Number % Counter == 0)
				return enPrimeOrNot::NotPrime;
			Counter++;
		}

		return enPrimeOrNot::Prime;
}

void PrintPrimeOrNotPrime(int Number)
{
	if (CheckPrimOrNot(Number) == enPrimeOrNot::Prime)
		cout << "This Number is Prime.";
	else
		cout << "This Number is Not Prime.";
}


int main()
{
		PrintPrimeOrNotPrime(ReadNumber("Please Enter a number to check if it's prime or not: ")) ;
		cout << endl;	
}