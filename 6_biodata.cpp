#include <iostream>
#include <string>
using namespace std;

class student
{
    public:
    string name;
    string roll_num;
    string department;
    string address;
    
    public:
   void input()
   {
    cout<<"Enter Name:";
    cin>>name;

    cout<<"Enter roll_num:";
    cin>>roll_num;

    cout<<"Enter department:";
    cin>>department;

    cout<<"Enter address:";
    cin>>address;

     }

     void display()
     {
        cout<<"Student Biodata :";

        cout<<"Name:"<<name<<endl;
        cout<<"Roll_num:"<<roll_num<<endl;
        cout<<"Department:"<<department<<endl;
        cout<<"Address:"<<address<<endl;

     }
};

int main()
{
    student s1;
    s1.name="Arslan Hassan";
    s1.roll_num="300012824057";
    s1.department="CSE(Data Science)";
    s1.address="Gorakhpur";

    s1.display();

    return 0;
}