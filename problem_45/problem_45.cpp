#include <iostream>

using namespace std;

enum enMonth {Jan=1, Feb, Mar, Apr, May, June, July, Aug, Sep, Oct, Nov, Dec};

int ReadNumebrInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < From || Number > To);
	return Number;
}

enMonth ReadMonthNumber()
{
	return (enMonth)ReadNumebrInRange("Enter the month number: ", 1, 12);
}

string GetMonthName(enMonth MonthNumber)
{
	switch (MonthNumber)
	{
	case enMonth::Jan:
		return  "January.";

	case enMonth::Feb:
		return "February.";

	case enMonth::Mar:
		return  "March.";

	case enMonth::Apr:
		return  "April.";

	case enMonth::May:
		return  "May.";

	case enMonth::June:
		return  "June.";
		
	case enMonth::July:
		return  "July.";
		
	case enMonth::Aug:
		return "August.";

	case enMonth::Sep:
		return "September.";
		
	case enMonth::Oct:
		return "October";
		
	case enMonth::Nov:
		return "Novomber.";
		
	case enMonth::Dec:
		return "December.";
		
	default:
		return "non-existent month!!";

	}
}

int main()
{
	cout << GetMonthName(ReadMonthNumber());
	
}