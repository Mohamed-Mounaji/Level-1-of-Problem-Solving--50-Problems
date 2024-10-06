//Converting seconds to >>    days : hours : minutes : seconds


#include <iostream>
#include <cmath>
using namespace std;

struct strTime
{
	int Days;
	int Hours;
	int Minutes;
	int Seconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

strTime ConvertSecondsToFullTime(int TotalSeconds)
{
	strTime FullTime;
	const int SecondsPerDay = pow(60, 2) * 24;
	const unsigned short SecondsPerHour = pow(60, 2);
	const unsigned short SecondsPerMinute = 60;


	FullTime.Days = floor(TotalSeconds / SecondsPerDay);
	int Remainder = TotalSeconds % SecondsPerDay;

	FullTime.Hours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;

	FullTime.Minutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;

	FullTime.Seconds = Remainder;

	return FullTime;
}

void PrintTime(strTime FullTime)
{

	cout << FullTime.Days << " : "
		<< FullTime.Hours << " : "
		<< FullTime.Minutes << " : "
		<< FullTime.Seconds;

}

int main()
{
	int TotalSeconds = ReadPositiveNumber("Please enter the total time in seconds: ");

	strTime FullTime = ConvertSecondsToFullTime(TotalSeconds);

	PrintTime(FullTime);

}