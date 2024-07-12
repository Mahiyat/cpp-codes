#include<iostream>
using namespace std;

class time
{
    int hours,minutes,seconds;
public:
    void get_time()
    {
        while(true)
        {
            cout<<"Enter hours: ";
            cin.unsetf(ios::skipws);
            cin>>hours;
            if(hours>=24||hours<0)
            {
                cout<<"Hours must be between 0 and 23\n";
                cin.clear(ios::failbit);
            }
            if(cin.good())
            {
                cin.ignore(10,'\n');
                break;
            }
            cin.clear();
            cin.ignore(10,'\n');
            cout<<"Incorrect hours input\n";
        }
        while(true)
        {
            cout<<"Enter minutes: ";
            cin.unsetf(ios::skipws);
            cin>>minutes;
            if(minutes>=60||minutes<0)
            {
                cout<<"Minutes must be between 0 and 59\n";
                cin.clear(ios::failbit);
            }
            if(cin.good())
            {
                cin.ignore(10,'\n');
                break;
            }
            cin.clear();
            cin.ignore(10,'\n');
            cout<<"Incorrect minutes input\n";
        }
        while(true)
        {
            cout<<"Enter seconds: ";
            cin.unsetf(ios::skipws);
            cin>>seconds;
            if(seconds>=60||seconds<0)
            {
                cout<<"Seconds must be between 0 and 59\n";
                cin.clear(ios::failbit);
            }
            if(cin.good())
            {
                cin.ignore(10,'\n');
                break;
            }
            cin.clear();
            cin.ignore(10,'\n');
            cout<<"Incorrect seconds input\n";
        }
    }
    void put_time()
    {
        cout<<hours<<":"<<minutes<<":"<<seconds<<"\n";
    }
};

int main()
{
    time t;
    char ch;
    do
    {
        t.get_time();
        cout<<"time = ";
        t.put_time();
        cout<<"\n";
        cout<<"Do another (y/n)? ";
        cin>>ch;
        cin.ignore(10,'\n');
    }while(ch=='y');
    return 0;
}
