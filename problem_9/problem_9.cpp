#include <iostream>
using namespace std;

void ReadNums(float nums[3])
{
	cout << "Please enter the first number: ";
	cin >> nums[0];

	cout << "Please enter the second number: ";
	cin >> nums[1];

	cout << "Please enter the third number: ";
	cin >> nums[2];
}

float CalculateSum(float nums[3])
{
	return  nums[0] + nums[1] + nums[2];
}

void PrintSum(float nums[3])
{
	cout << nums[0] << " + " << nums[1] << " + " << nums[2] << " = " << CalculateSum(nums);
}

int main()
{
	float Nums[3];

	ReadNums(Nums);
	PrintSum(Nums);
	return 0;
}
