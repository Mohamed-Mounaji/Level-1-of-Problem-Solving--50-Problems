#include <iostream>
using namespace std;


void ReadMarks(float Marks[3])
{
	cout << "Please enter the first mark: ";
	cin >> Marks[0];

	cout << "Please enter the second mark: ";
	cin >> Marks[1];

	cout << "Please enter the third mark: ";
	cin >> Marks[2];
}

float SumOf3Marks(float Marks[3])
{
	return Marks[0] + Marks[1] + Marks[2];
}

float CalculateAverage(float Marks[3])
{
	return SumOf3Marks(Marks)/ 3;
}

void PrintResult(float TotalMark)
{
	cout << "\nYour Final Marks is: " << TotalMark;

}



int main()
{
	float Marks[3];

	ReadMarks(Marks);
	PrintResult(CalculateAverage(Marks));


	return 0;
}