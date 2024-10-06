#include <iostream>
using namespace std;

struct strInfo 
{
	int age;
	bool HasDrivingLicense;
	bool Recommendation;
};

strInfo ReadInfo()
{
	strInfo info;

	cout << "Do You Have Recommendation:(YES=>1  NO=>0) ";
	cin >> info.Recommendation;

	cout << "Enter Your Age: ";
	cin >> info.age;

	cout << "Do You Have Driving License:(YES=>1  NO=>0)  ";
	cin >> info.HasDrivingLicense ;

	return info;
}

bool IsAccepted(strInfo info)
{
	return ((info.age >= 21 && info.HasDrivingLicense == true)|| (info.Recommendation == true));
}

void CheckInfo(strInfo info)
{
	if (IsAccepted(info))
		cout << "\nHired.\n";
	else
		cout << "\nRejected.\n";
}

int main()
{
	CheckInfo(ReadInfo());

}






































/*int main()
{
	bool recommendation = 0, driveLicense = 0;
	int age = 0;

	cout << "Do you have recommendation(YES=>1  NO=>0): ";
	cin >> recommendation;

	if (recommendation == 1)
	{
		cout << "Hired!";
	}
	else
	{
		cout << "Enter please your age: ";
		cin >> age;
		cout << "Do have drive license(YES=>1  NO=>0): ";
		cin >> driveLicense;

		if (age >= 21 && driveLicense == 1)
		{
			cout << "Hired!";
		}
		else
		{
			cout << "Sorry, You Are Rejected!";
		}
	}
}
*/
