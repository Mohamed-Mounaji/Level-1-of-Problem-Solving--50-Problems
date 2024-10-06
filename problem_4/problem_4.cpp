#include <iostream>
using namespace std;

struct strInfo {
	int age;
	bool HasDrivingLicense;
};

strInfo ReadInfo()
{
	strInfo info;

	cout << "Enter Your age: ";
	cin >> info.age;

	cout << "Do you have driving license: ";
	cin >> info.HasDrivingLicense;

	return info;
}

bool IsAccepted(strInfo info)
{
	return (info.age >= 21 && info.HasDrivingLicense == true);
}

void PrintResult(strInfo info)
{
	if (IsAccepted(info))
		cout << "\nHired.\n";
	else
		cout << "\nRejected.\n";
	
}

int main()
{
	
	PrintResult(ReadInfo());

	return 0;
}