#include <iostream>
using namespace std;
int sum(int first, int second, int sum)
{
    cout << "Sum = " << sum;
}
int main()
{
    int a, b, c;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    c = a + b;
    sum(a, b, c);

    return 0;
}