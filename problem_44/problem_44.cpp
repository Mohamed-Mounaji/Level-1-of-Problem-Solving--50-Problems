#include <iostream>
using namespace std;

enum enWeekDays{Monday=1, Tuesday, Wednsday,Thursday, Friday, Saturday, Sunday};

int ReadNumberInRange(int From, int To,string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enWeekDays ReadDayNumber()
{
	return (enWeekDays)ReadNumberInRange(1, 7, "Enter Today's number: ");
}

string GetDayOfWeek(enWeekDays DayNumber)
{
	switch (DayNumber)
	{
	case enWeekDays::Monday:
		return "Monday";

	case enWeekDays::Tuesday:
		return "Tuesday";
	case enWeekDays::Wednsday:
		return "Wednesday";
	case enWeekDays::Thursday:
		return "Thursday";
	case enWeekDays::Friday:
		return  "Friday";
	case enWeekDays::Saturday:
		return "Saturday";
	case enWeekDays::Sunday:
		return "Sunday";
	default:
		return "Invalid day!!";
	}
}

int main()
{
	cout << endl <<GetDayOfWeek(ReadDayNumber());


}