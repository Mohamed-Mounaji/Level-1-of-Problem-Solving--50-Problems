#include <iostream>
#include <cmath>

using namespace std;

void ReadRadius(float& Radius)
{
	cout << "Please enter the radius of your circle: ";
	cin >> Radius;
}

float CalculateCircleArea(float Radius)
{
	const float PI = 3.14159265359;
	return PI * pow(Radius, 2);
}

void PrintResult(float Area)
{
	cout << "Your circle area is: " << Area << endl;
}

int main()
{
	float Radius=0;
	ReadRadius(Radius);

	PrintResult(CalculateCircleArea(Radius));

}