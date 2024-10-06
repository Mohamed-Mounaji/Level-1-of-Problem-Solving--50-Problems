#include <iostream>
using namespace std;

void ReadThreeNums(int& num1, int& num2, int& num3)
{
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;
}

int MaxNumber(int num1, int num2, int num3)
{
    if (num1 > num2)
        if (num1 > num3)
            return num1;

        else
            return num3;
    
    else
        if (num2 > num3)
            return num2;

        else
            return num3; 
}

void PrintResult(int max)
{
    cout << "\nThe greater number is: " << max;
}
int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    ReadThreeNums(num1, num2, num3);

    PrintResult(MaxNumber(num1, num2, num3));
  
    
}

