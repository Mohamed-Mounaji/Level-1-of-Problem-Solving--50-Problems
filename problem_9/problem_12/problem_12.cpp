#include <iostream>
using namespace std;

void ReadTwoNums(float& num1, float& num2)
{
    cout << "Enter number one: ";
    cin >> num1;
    cout << "Enter number two: ";
    cin >> num2;
}

float MaxOfTwoNums(float num1, float num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

void PrintTheGreater(float max)
{
    cout << "\nThe greater number is: " << max;
}

int main()
{
    float num1=0, num2=0;
    ReadTwoNums(num1, num2);

    PrintTheGreater(MaxOfTwoNums(num1, num2));
    

}