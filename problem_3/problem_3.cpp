#include <iostream>
using namespace std;

enum enNumType { even = 1, odd };

int ReadNum()
{
	int num;
	cout << "Please enter a number: ";
	cin >> num;

	return num;
}

enNumType ReturnNumType(int num)
{
	if (num % 2 == 0)
		return enNumType::even;
	else
		return enNumType::odd;
}

void PrintNumType(enNumType type)
{
	if (type == enNumType::even)
		cout << "\nThis Number is even.\n";
	else
		cout << "\nThis number is odd.\n";
}

int main()
{
	PrintNumType(ReturnNumType(ReadNum()));
	return 0;
}