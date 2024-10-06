#include <iostream>
using namespace std;

int ReadBase()
{
	int Base;
	cout << "Enter Base: ";
	cin >> Base;
	return Base;
}
int ReadExponent()
{
	int Exponent;
	cout << "Enter exponent: ";
	cin >> Exponent;
	return Exponent;
}
int Power(int Base, int Exponent)
{
	int Counter = 1;
	int Sum = 1;
	for (Counter; Counter <= Exponent; Counter++)
	{
		Sum *= Base;
	}
	return Sum;
}

int main()
{
	int Base = ReadBase();
	int Exp = ReadExponent();
	cout << Base << "^" << Exp<< "= " << Power(Base, Exp);

}