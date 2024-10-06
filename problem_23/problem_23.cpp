#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleSides(float& SideA, float& SideB, float& SideC)
{
	cout << "Please enter side A: ";
	cin >> SideA;

	cout << "Please enter side B: ";
	cin >> SideB;

	cout << "Please enter side C: ";
	cin >> SideC;
}

float CircleAreaIscribedInArbitraryTriangle(float a, float b, float c)
{
	const float PI = 3.14159265359;

	float p = (a + b + c) / 2;
	float t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	t = pow(t, 2);
	return PI * t;
}

void PrintResult(float Area)
{
	cout << "\nYour circle area is: " << Area;

}

int main()
{
	float a=0, b=0, c=0;
	ReadTriangleSides(a, b, c);

	PrintResult(CircleAreaIscribedInArbitraryTriangle(a, b, c));

	return 0;
}