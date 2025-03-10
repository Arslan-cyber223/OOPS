#include <iostream>
using namespace std;
int main()
{
    int first , second,swap;
    cout << "Enter 1st number : ";
    cin >> first;
    cout << "Enter 2nd number : ";
    cin >> second;
     cout<<"Number before swapping :" <<endl;
     cout<<" First = "<<first <<endl;
     cout<<" Second = "<<second <<endl;
    
     swap=first;
     first=second;
     second = swap;

     cout<<"After swapping first becomes "<<first << " and second becomes " << second << endl; 

    return 0;
}