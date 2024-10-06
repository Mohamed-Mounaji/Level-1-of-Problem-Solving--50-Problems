#include <iostream>
using namespace std;

float ReadNumberInRange(int From, int To)
{
    float Grade;
    do
    {
        cout << "Please enter your grade: ";
        cin >> Grade;
    } while (Grade < From || Grade > To);

    return Grade;
}
char GradeLetter(float Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';

}

int main()
{
    cout <<"Result= " << GradeLetter(ReadNumberInRange(0, 100));
    
}