#include <iostream>
using namespace std;

float ReadNum()
{
	float num = 0;
	cout << "Enter a Number: ";
	cin >> num;

	return num;
}

float GetHalfOfNumber(float num)
{
	return num / 2;
}

void PrintHalfOfNumber(float num)
{
	cout << "Half of " << num << " Is " << GetHalfOfNumber(num) ;
}

int main()
{
	PrintHalfOfNumber(ReadNum());

	return 0;
}