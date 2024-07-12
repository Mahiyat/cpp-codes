#include<iostream>
using namespace std;

struct time{
int hours,minutes,seconds;
};

struct employee{
time entry_time, exit_time,duration;
};

void getInfo(time &t1)
{
    cout<<"Enter hours: ";
    cin>>t1.hours;
    cout<<"Enter minutes: ";
    cin>>t1.minutes;
    cout<<"Enter seconds: ";
    cin>>t1.seconds;
}

void display(time &t1, int i)
{
    cout<<"The work duration of employee "<<i<<" is ";
    cout<<t1.hours<<" hours "<<t1.minutes<<" minutes "<<t1.seconds<<" seconds\n";
}

time calculate(time &t1, time &t2)
{
    time temp;
    int a,b,c;
    a=(t1.hours*3600)+(t1.minutes*60)+t1.seconds;
    b=(t2.hours*3600)+(t2.minutes*60)+t2.seconds;
    if(b>=a)c=b-a;
    else c=(86400-a)+b;
    temp.hours=c/3600;
    c%=3600;
    temp.minutes=c/60;
    temp.seconds=c%60;
    return temp;
}

int main()
{
    employee e[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter entry time information of employee "<<i+1<<":\n";
        getInfo(e[i].entry_time);
        cout<<"Enter exit time information of employee "<<i+1<<":\n";
        getInfo(e[i].exit_time);
        e[i].duration=calculate(e[i].entry_time,e[i].exit_time);
        display(e[i].duration,i+1);
        if(i<4)cout<<"\n";
    }
    return 0;
}

