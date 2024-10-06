#include <iostream>
using namespace std;

void ReadTwoNums(int& num1, int& num2)
{
	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;
}

void PrintTwoNumsValues(int num1, int num2)
{
	cout << "\nThe first number's value: "<< num1 << endl;
	cout << "The second number's value: " << num2 << endl;
}

void ChangeTwoNumsValues(int& num1, int& num2)
{
	int num3 = num1;
	num1 = num2;
	num2 = num3;
}

int main()
{
	int num1 = 0, num2 = 0;
	ReadTwoNums(num1, num2);

	cout << "\nPrint nums before change";
	PrintTwoNumsValues(num1, num2);
	
	ChangeTwoNumsValues(num1, num2);

	cout << "\nPrint nums after change";
	PrintTwoNumsValues(num1, num2);



	

}

