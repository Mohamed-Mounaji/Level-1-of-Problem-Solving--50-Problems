#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide()
{
	float SquareSide = 0;
	cout << "Please enter the square's side's length that surrounds the circle: ";
	cin >> SquareSide;

	return SquareSide;
}

float CalculateCircleAreaBySquareSide(float SquareSide)
{
	const float PI = 3.14159265359;

	return  PI * (pow((SquareSide / 2), 2));
}

void PrintResult(float Area)
{
	cout << "\nYour circle area is: " << Area;
}

int main()
{

	PrintResult(CalculateCircleAreaBySquareSide(ReadSquareSide()));

	return 0;
}