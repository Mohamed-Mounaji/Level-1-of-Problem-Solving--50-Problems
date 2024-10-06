#include <iostream>
using namespace std;

enum enOddOrEven{ Odd=1, Even};

int ReadNumber()
{
	int Number=0;
	std::cout << "Enter the stop number: ";
	cin >> Number;
	return Number;
}

enOddOrEven CHeckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumOfOddNumsFrom1toN_UsingWhile(int N)
{
	int Sum = 0;
	int Counter = 0;

	while (Counter <= N)
	{
		if (CHeckOddOrEven(Counter) == enOddOrEven::Odd)
			Sum += Counter;
		Counter++;
	}

	return Sum;
}

int SumOfOddNumsFrom1toN_UsingDo(int N)
{
	int Sum = 0;
	int Counter = 0;

	do
	{
		if (CHeckOddOrEven(Counter) == enOddOrEven::Odd)
			Sum += Counter;
		Counter++;

	} while (Counter <= N);

	return Sum;
}

int SumOfOddNumsFrom1toN_UsingFor(int N)
{
	int Sum = 0;
	for (int Counter = 0; Counter <= N; Counter++)
	{
		if (CHeckOddOrEven(Counter) == enOddOrEven::Odd)
			Sum += Counter;
	}
	return Sum;
}

int main()
{
	int N = ReadNumber();
	cout << "The Sum Using While Loop: " << SumOfOddNumsFrom1toN_UsingWhile(N) << endl;

	cout << "The Sum Using Do..While Loop: " << SumOfOddNumsFrom1toN_UsingDo(N) << endl;

	cout << "The Sum Using For Loop: " << SumOfOddNumsFrom1toN_UsingFor(N) << endl;

}