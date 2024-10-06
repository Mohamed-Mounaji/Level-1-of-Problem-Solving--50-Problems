#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
	int Num=0;
	do {
		cout << "Please enter a positive number: ";
		cin >> Num;
	} while (Num < 1);
	return Num;
}

int Factorial_UsingWhile(int Number)
{
	int Counter = 1;
	int Sum = 1;
	while (Counter <= Number)
	{
		Sum *= Counter;
		Counter++;
	}
	return Sum;
}

int Factorial_UsingFor(int Number)
{
	
	int Sum = 1;
	for (int Counter = 1; Counter <= Number; Counter++)
	{
		Sum *= Counter;
	}
	return Sum;
}

int Factorial_UsingDo(int Number)
{
	int Counter = 1;
	int Sum = 1;
	do
	{
		Sum *= Counter;
		Counter++;
	} while (Counter <= Number);

	return Sum;
}

int main()
{
	int N = ReadPositiveNumber();

	cout << "\nThe Sum using While loop: " << Factorial_UsingWhile(N)<< endl;
	cout << "The Sum using For loop: " << Factorial_UsingFor(N) << endl;
	cout << "The Sum using Do..While loop: " << Factorial_UsingDo(N) << endl;
}