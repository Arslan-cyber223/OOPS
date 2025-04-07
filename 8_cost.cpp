#include <iostream>
using namespace std;
class things
{
public:
    int num;
    double cost;

public:
    void input()
    {
        cout << "Enter the num : ";
        cin >> num;

        cout << "Enter the cost :";
        cin >> cost;
    }
    void display()
    {
        cout << "Number :" << num << endl;
        cout << "Cost :" << cost << endl;
    }
};
int main()
{
    things s1;
    s1.num = 68716;
    s1.cost = 60.0000006;

    s1.display();

    return 0;
}