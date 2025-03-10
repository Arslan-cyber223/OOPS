#include<iostream>
using namespace std;

void display(int n1 , double n2)
{
    cout<<"The integer number is: "<<n1<<endl;
    cout<<"The double value is : "<<n2<<endl;
    if(n1>n2)
    cout<<"Largest number is :"<<n1<<endl;
    cout<<"largest number is :"<<n2;

}
int main()
{
    int num1;
    cout<<"Enter the integer value : ";
    cin>>num1;
    double num2;
    cout<<"Enter the double value : ";
    cin>> num2;
    display(num1 , num2) ;

    return 0;
}