#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do {
		cout << Message;
		cin >> Number;

	} while (Number < 0);

	return Number;
}

float HoursToDays(float Hours)
{
	return Hours / 24;
}

float HoursToWeeks(float Hours)
{
	return Hours / 24 / 7;
}

float DaysToWeeks(float Days)
{
	return Days / 7;
}

int main()
{
	float NumberOfHours = ReadPositiveNumber("Please enter hours: ");

	cout << NumberOfHours << " hours = " << HoursToDays(NumberOfHours) << " Days\n";
	cout << NumberOfHours << " hours = " << HoursToWeeks(NumberOfHours) << " Weeks\n";


}