#include<iostream>
using namespace std;

class angle
{
    int degrees;
    float minutes;
    char direction;
public:
    angle():degrees(0),minutes(0.0),direction('\0')
    {}
    angle(int d, float m, char c):degrees(d),minutes(m),direction(c)
    {}
    void getdata()
    {
        cout<<"Enter the degrees: ";
        cin>>degrees;
        cout<<"Enter the minutes: ";
        cin>>minutes;
        cout<<"Enter the direction letter: ";
        cin>>direction;
    }
    void display()
    {
        cout<<"The angle value is "<<degrees<<"\xF8"<<minutes<<"\' "<<direction<<endl;
    }
};

int main()
{
    char ch;
    angle a1(179,59.9,'E');
    a1.display();
    angle a2;
    do
    {
        a2.getdata();
        a2.display();
        cout<<"Do you want to enter another value (y/n)? ";
        cin>>ch;
    }while(ch=='y');
    return 0;
}
