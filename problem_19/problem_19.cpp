#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter()
{
	float d = 0;
	cout << "Please enter your circle's diameter: ";
	cin >> d;

	return d;
}

float CalculateAreaByDiameter(float Diameter)
{
	const float PI = 3.14159265359;
	return (PI * pow(Diameter, 2)) / 4;
}

void PrintResult(float Area)
{
	cout << "\nYour Circle Area Is: " << Area;
}



int main()
{
	PrintResult(CalculateAreaByDiameter(ReadDiameter()));

	return 0;
}