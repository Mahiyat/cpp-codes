#include<iostream>
using namespace std;

enum format{zero,am,pm};

class time
{
    int hours,minutes,seconds;
    format frmt;
public:
    time():hours(0),minutes(0),seconds(0),frmt(zero)
    { }
    time(int h, int m, int s):hours(h),minutes(m),seconds(s),frmt(zero)
    { }
    void getTime();
    void display() const;
    void timeDiff(time,time);
};

void time::getTime()
{
    char c;
    cout<<"Want to enter time in am/pm? (y/n): ";
    cin>>c;
    cout<<"Enter the hour: ";
    cin>>hours;
    cout<<"Enter the minute: ";
    cin>>minutes;
    cout<<"Enter the second: ";
    cin>>seconds;
    if(c=='y')
    {
        string s;
        cout<<"Enter am/pm: ";
        cin>>s;
        if(s=="am")frmt=am;
        else frmt=pm;
    }
    else frmt=zero;
}

void time::display() const
{
    cout<<"The time difference in format hh:mm:ss is: "<<hours<<":"<<minutes<<":"<<seconds<<"\n";
}

void time::timeDiff(time t1,time t2)
{
    int a,b,c;
    a=(t1.hours*3600)+(t1.minutes*60)+t1.seconds;
    if(t2.frmt==0||t2.frmt==1)b=(t2.hours*3600)+(t2.minutes*60)+t2.seconds;
    else b=((t2.hours+12)*3600)+(t2.minutes*60)+t2.seconds;
    if(a>=b)c=a-b;
    else c=(86400-b)+a;
    hours=c/3600;
    c%=3600;
    minutes=c/60;
    seconds=c%60;
}

int main()
{
    time time3,time2;
    time time1(14,40,0);
    time2.getTime();
    time3.timeDiff(time1,time2);
    time3.display();
    return 0;
}

