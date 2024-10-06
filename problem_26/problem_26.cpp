#include <iostream>
using namespace std;

int ReadNumber()
{
	int Num = 0;
	cout << "Enter the stop number: ";
	cin >> Num;
	return Num;
}

void PrintToTheStopNumUsingForLoop(int StopNum)
{
	cout << "\nUsing For Loop\n";

	for (int i = 0; i <= StopNum; i++)
	{
		cout << i << endl;
	}
}

void PrintToTheStopNumUsingWhileLoop(int StopNum)
{
	cout << "\nUsing while Loop\n";

	int i = 0;
	while (i <= StopNum)
	{
		cout << i << endl;
		i++;
	}
}

void  PrintToTheStopNumUsingDoLoop(int StopNum)
{
	cout << "\nUsing Do Loop\n";
	int i = 0;
	do {
		cout << i << endl;
		i++;
	} while (i <= StopNum);
}
int main()
{
	PrintToTheStopNumUsingForLoop(ReadNumber());
}