#include <iostream>
using namespace std;

void ReadWidthAndLength(float& Width, float& Length)
{
	cout << "Please, enter width: ";
	cin >> Width;

	cout << "Please, enter  length: ";
	cin >> Length;
}

float CalculateRectangleArea(float width,float length)
{
	return width * length;
}

void PrintArea(float Area)
{
	cout << "\nYour rectangle area is: " << Area << endl;
}

int main()
{
	float Width = 0, Length = 0;

	ReadWidthAndLength(Width, Length);
	
	PrintArea(CalculateRectangleArea(Width, Length));
	
	return 0;
}