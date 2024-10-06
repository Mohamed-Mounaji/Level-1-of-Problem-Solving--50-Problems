#include <iostream>
using namespace std;

void ReadBaseAndHeight(float& Base, float& Height)
{
	cout << "Please enter the triangle base: ";
	cin >> Base;

	cout << "Enter the triangle height: ";
	cin >> Height;
}

float CalculateTriangleArea(float Base,float Height)
{
	return  (Base / 2) * Height;
}

void PrintResult(float Area)
{
	cout << "Your triangle area is: " << Area;
}

int main()
{
	float TriangleBase=0, TriangleHeight=0;

	ReadBaseAndHeight(TriangleBase, TriangleHeight);

	PrintResult(CalculateTriangleArea(TriangleBase, TriangleHeight));

	return 0;
}

