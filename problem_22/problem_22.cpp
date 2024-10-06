#include <iostream>
#include <cmath>
using namespace std;

float CalculateCircleAreaInscribedInTriangle(float leg, float base)
{
	const float PI = 3.14159265359;
	return  PI * (pow(base, 2) / 4) * ((2 * leg - base) / (2 * leg + base));
}

void ReadTriangleLegAndBase(float& Leg, float& Base)
{
	cout << "Please enter the triangle leg's length: ";
	cin >> Leg;

	cout << "Please enter the triangle base's length: ";
	cin >> Base;
}

void PrintResult(float Area)
{
	cout << "\nYour circle area is: " << Area;

}

int main()
{
	float TriangleLeg=0, TriangleBase=0;

	ReadTriangleLegAndBase(TriangleLeg, TriangleBase);
	PrintResult(CalculateCircleAreaInscribedInTriangle(TriangleLeg, TriangleBase));

	return 0;
}