#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the Year :";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "leap year" << endl;
    }
    else
    {
        cout << "Not a leap year" << endl;
    }
    return 0;
}