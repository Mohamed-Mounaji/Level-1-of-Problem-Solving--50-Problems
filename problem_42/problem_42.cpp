//The total seconds worked calculator

#include <iostream>
#include <cmath>
using namespace std;

struct strTime { 
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

strTime ReadTaskDuration()
{
	strTime TaskDuration;
	TaskDuration.Days = ReadPositiveNumber("Enter the number of days: ");
	TaskDuration.Hours = ReadPositiveNumber("Enter the number of hours: ");
	TaskDuration.Minutes = ReadPositiveNumber("Enter the number of Minutes: ");
	TaskDuration.Seconds = ReadPositiveNumber("Enter the number of Seconds: ");

	return TaskDuration;
}

int TaskDurationInSeconds(strTime TaskDuration)
{
	int TotalTimeInSeconds = 0;
	TotalTimeInSeconds = TaskDuration.Days * 24 * 60 * 60;
	TotalTimeInSeconds += TaskDuration.Hours * 60 * 60;
	TotalTimeInSeconds += TaskDuration.Minutes * 60;
	TotalTimeInSeconds += TaskDuration.Seconds;

	return TotalTimeInSeconds;

}


int main()
{
	cout << "\nThe task duratoin in seconds is " << TaskDurationInSeconds(ReadTaskDuration());


}