#include <iostream>
using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Devide = '/' };

float ReadNumber(string Message)
{
	float Num=0;
	cout << Message ;
	cin >> Num;
	return Num;
}

enOperationType ReadOperationType()
{
	char Opr='+';
	do {
		cout << "Enter the operator:('+' or '-' or '*' or '/') ";
		cin >> Opr;
	} while (Opr != '-' && Opr != '+' && Opr != '*' && Opr != '/');

	return (enOperationType)Opr;
}

float CalculateTwoNumbers(float Num1, enOperationType Opr, float Num2)
{
	switch (Opr) 
	{
	case enOperationType::Subtract:
		return Num1 - Num2;
	case enOperationType::Add:
		return Num1 + Num2;
	case enOperationType::Multiply:
		return Num1 * Num2;
	case enOperationType::Devide:
		return Num1 / Num2;
	default:
		return Num1 + Num2;
	}
}


int main()
{
	float Num1 = ReadNumber("Enter the first number: ");
	enOperationType Opr = ReadOperationType();
	float  Num2 = ReadNumber("Enter the second number: ");

	cout << "Reasult= " << CalculateTwoNumbers(Num1, Opr, Num2);

}