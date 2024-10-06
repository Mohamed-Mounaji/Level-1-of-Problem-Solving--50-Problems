#include <iostream>
using namespace std;

int ReadNum()
{
	int StartNum=0;
	cout << "Please enter the start number: ";
	cin >> StartNum;

	return StartNum;
}

void PrintFromNTo1_UsingFor(int N)
{
	cout << "\nPrinted Using For Loop\n";
	for (int Counter = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

void PrintFromNTo1_UsingWhile(int N)
{
	cout << "\nPrinted Using While Loop\n";

	int Counter = N;
	while (Counter >= 1)
	{
		cout << Counter << endl;
		Counter--;
	}
}

void PrintFromNTo1_UsingDo(int N)
{
	cout << "\nPrinted Using Do Loop\n";
	int Counter = N;
	do {
		cout << Counter << endl;
		Counter--;
	} while (Counter >= 1);

}

int main()
{
	PrintFromNTo1_UsingDo(ReadNum());
}