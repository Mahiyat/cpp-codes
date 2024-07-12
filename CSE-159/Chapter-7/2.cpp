#include<iostream>
using namespace std;

class employee
{
    string name;
    long employee_num;
public:
    void getdata()
    {
        cout<<"Enter the employee name: ";
        cin>>name;
        cout<<"Enter the employee number: ";
        cin>>employee_num;
    }
    void putdata()
    {
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Number: "<<employee_num<<endl;
    }
};

int main()
{
    employee e[100];
    int i;
    for(i=0;i<100;i++)
    {
        e[i].getdata();
    }
    for(i=0;i<100;i++)
    {
        e[i].putdata();
    }
    return 0;
}
