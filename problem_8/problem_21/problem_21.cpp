#include <iostream>
#include <cmath>
using namespace std;

float ReadCircumference()
{
	float Circ = 0;

	cout << "Please enter your circle's circumference: ";
	cin >> Circ;

	return Circ;
}

float CalculateCircleAreaByCircumference(float circ)
{
	const float PI = 3.14159265359;
	return pow(circ, 2) / (PI * 4);
}

void PrintResult(float Area)
{
	cout << "\nYour circle area is: " << Area;
}

int main()
{

	PrintResult(CalculateCircleAreaByCircumference(ReadCircumference()));

	return 0;
}