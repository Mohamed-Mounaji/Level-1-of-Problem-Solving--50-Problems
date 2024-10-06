#include <iostream>
using namespace std;

struct strFullName
{
	string FirstName;
	string LastName;
};

strFullName ReadFullName()
{

	strFullName Name;

	cout << "Enter Your First Name: ";
	cin >> Name.FirstName;

	cout << "Enter Your Last Name: ";
	cin >> Name.LastName;

	return Name;
}

string GetFullName(strFullName Name, bool Reverse)
{
	if (Reverse)
		return Name.LastName + " " + Name.FirstName;
	else
		return Name.FirstName + " " + Name.LastName;
}

void PrintFullName(string Name)
{
	cout << "\nYour Full Name Is : "  << Name << endl;
}

int main()
{
	PrintFullName(GetFullName(ReadFullName(), false));
	

}
