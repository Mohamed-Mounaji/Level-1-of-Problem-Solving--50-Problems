#include <iostream>
using namespace std;

int ReadAge(int From, int To)
{
	int Age = 0;
	cout << "Enter age between " << From << " to " << To << ": ";
	cin >> Age;
	return Age;
}

bool ValidateNumberInRange(int Num, int From, int To)
{
	return (Num >= From && Num <= To);
}

int ReadAgeUntilBetween(int From, int To)
{
	int Age = 0;

	do {
		Age = ReadAge(From, To);
	} while (!ValidateNumberInRange(Age, From, To));
	return Age;
}

void PrintResult(int Age)
{
	cout << "\Your age is: " << Age;
}

int main()
{
	PrintResult(ReadAgeUntilBetween(18, 45));

}