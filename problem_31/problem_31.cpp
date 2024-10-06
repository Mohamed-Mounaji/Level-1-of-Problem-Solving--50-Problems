#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Please, Enter a number: ";
	cin >> Number;

	return Number;
}

int PowerTwo(int Number)
{
	return Number * Number;
}
int PowerThree(int Number)
{
	return Number * Number * Number;
}
int PowerFour(int Number)
{
	return Number * Number * Number * Number;
}

void PrintResult(int Number)
{
	cout << Number << "^2= " << PowerTwo(Number) << endl;
	cout << Number << "^3= " << PowerThree(Number) << endl;
	cout << Number << "^4= " << PowerFour(Number);
}

int main()
{
	int Num = ReadNumber();
	PrintResult(Num);

}
