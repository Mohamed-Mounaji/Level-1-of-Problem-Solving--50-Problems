#include <iostream>
using namespace std;

enum enOddOrEven {Odd=1, Even};

int ReadNumber()
{
	int Number=0;
	cout << "Enter the stop number: ";
	cin >> Number;

	return Number;
}

enOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 == 0)
		return enOddOrEven::Even;
	else
		return enOddOrEven::Odd;
}

int SumOfEvenNumsFrom1toN_UsingFor(int Number)
{
	int Sum = 0;
	for (int Counter = 0; Counter <= Number; Counter++)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
			Sum += Counter;
	}
	return Sum;
}

int SumOfEvenNumsFrom1toN_UsingWhile(int Number)
{
	int Counter = 0;
	int Sum = 0;
	while (Counter <= Number)
	{
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
			Sum += Counter;
		Counter++;
	}
	return Sum;
}

int SumOfEvenNumsFrom1toN_UsingDo(int Number)
{
	int Counter = 0;
	int Sum = 0;

	do {
		if (CheckOddOrEven(Counter) == enOddOrEven::Even)
			Sum += Counter;
		Counter++;
	} while (Counter <= Number);
	return Sum;
}

int main()
{
	int N = ReadNumber();

	cout << "\nThe sum using for loop: "<<SumOfEvenNumsFrom1toN_UsingFor(N) << endl;
	cout << "The sum using while loop: " << SumOfEvenNumsFrom1toN_UsingWhile(N) << endl;
	cout << "The sum using Do loop: " << SumOfEvenNumsFrom1toN_UsingDo(N) << endl;

}