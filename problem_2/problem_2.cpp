#include <iostream>
#include <string>
using namespace std;

string ReadName()
{
	string name;
	cout << "Please enter your name: ";
	getline(cin, name);
	return name;
}

void PrintName(string name)
{
	cout << "\nFull Name: " << name << endl;
}
int main()
{
	PrintName(ReadName());
}