#include <iostream>
using namespace std;

void PrintAlphabet()
{
	for (int Counter = 65; Counter <= 90; Counter++)
	{
		cout << char(Counter);
		cout << endl;
	}
}

int main()
{
	PrintAlphabet();
}