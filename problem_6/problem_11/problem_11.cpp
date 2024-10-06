#include <iostream>
using namespace std;

enum enFailPass { Pass = 1, Fail = 2 };

void ReadMarks(float Marks[3])
{
	cout << "Enter mark one: ";
	cin >> Marks[0];

	cout << "Enter mark two: ";
	cin >> Marks[1];

	cout << "Enter mark three: ";
	cin >> Marks[2];
}

float CalculateSumOfThreeMarks(float Marks[3])
{
	return Marks[0] + Marks[1] + Marks[2];
}

float CalculateAverage(float Marks[3])
{
	return  CalculateSumOfThreeMarks(Marks) / 3;
}

enFailPass CheckAverage(float Avr)
{
	if (Avr >= 50)
		return enFailPass::Pass;
	else
		return enFailPass::Fail;
}

void PrintResult(float Avr)
{
	cout << "\nYour Average Is: " << Avr;

	if (CheckAverage(Avr) == enFailPass::Pass)
	{
		cout << "\n*********\n";
		cout << "Pass";
		cout << "\n*********\n";
	}

	else
	{
		cout << "\n*********\n";
		cout << "Fail";
		cout << "\n*********\n";
	}
}

int main()
{
	float Marks[3];

	ReadMarks(Marks);
	PrintResult(CalculateAverage(Marks));

}