#include <iostream>
using namespace std;

enum enPassFail {Pass = 1, Fail=2};

float ReadMark()
{
	float mark = 0;

	cout << "Please enter your mark: ";
	cin >> mark;

	return mark;
}

enPassFail CheckMark(float mark)
{
	if (mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(float mark)
{
	if (CheckMark(mark) == enPassFail::Pass)
	{
		cout << "\n************\n";
		cout << "Pass!";
		cout << "\n************\n";
	}

	else
	{
		cout << "\n************\n";
		cout << "fail";
		cout << "\n************\n";
	}
}

int main()
{

	PrintResult(ReadMark());
	
}