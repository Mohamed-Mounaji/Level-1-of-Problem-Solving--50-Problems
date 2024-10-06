#include <iostream>
#include <cmath>
using namespace std;

void ReadDiagonalAndWidth(float& Diagonal, float& Width)
{
	cout << "Please enter the diagonal of your rectangle: ";
	cin >> Diagonal;

	cout << "Please enter the width now: ";
	cin >> Width;
}

float CalculateRectangleArea(float d, float w)
{
	return w * sqrt( pow(d, 2) - pow(w, 2) );
}

void PrintResult(float Area)
{
	cout << "Your rectangle area is: " << Area;
}

int main()
{
	float Diagonal=0, Width=0;

	ReadDiagonalAndWidth(Diagonal, Width);

	PrintResult(CalculateRectangleArea(Diagonal, Width));



	return 0;

	//43.JLKJ
}