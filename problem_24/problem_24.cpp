#include <iostream>
using namespace std;

int ReadAge()
{
	int Age = 0;
	cout << "Enter your age: ";
	cin >> Age;
	return Age;
}

bool ValidateNumberInRange(int number, int from, int to)
{
	return (number >= from && number <= to);
}

void CheckAge(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))	
	{
		cout << "**********\n";
		cout << "Valid age";
		cout << "\n**********\n";
	}

	else
	{
		cout << "************\n";
		cout << "Invalid age";
		cout << "\n************\n";
	}
}

int main()
{
	CheckAge(ReadAge());

}