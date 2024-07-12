#include<iostream>
using namespace std;

class time{
int hours,minutes,seconds;
public:
    time():hours(0),minutes(0),seconds(0)
    { }
    time(int h, int m, int s):hours(h),minutes(m),seconds(s)
    { }

    void getInfo();
    void display(int i)const;
    void calculate(time& , time&);

    ~time()
    { }
};

struct employee{
time entry_time, exit_time,duration;
};

void time::getInfo()
{
    cout<<"Enter hours: ";
    cin>>hours;
    cout<<"Enter minutes: ";
    cin>>minutes;
    cout<<"Enter seconds: ";
    cin>>seconds;
}

void time::display(int i)const
{
    cout<<"The work duration of employee "<<i<<" is ";
    cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds\n";
}

void time::calculate(time &t1, time &t2)
{
    int a,b,c;
    a=(t1.hours*3600)+(t1.minutes*60)+t1.seconds;
    b=(t2.hours*3600)+(t2.minutes*60)+t2.seconds;
    if(b>=a)c=b-a;
    else c=(86400-a)+b;
    hours=c/3600;
    c%=3600;
    minutes=c/60;
    seconds=c%60;
}

int main()
{
    employee e[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter entry time information of employee "<<i+1<<":\n";
        e[i].entry_time.getInfo();
        cout<<"Enter exit time information of employee "<<i+1<<":\n";
        e[i].exit_time.getInfo();
        e[i].duration.calculate(e[i].entry_time,e[i].exit_time);
        time result(e[i].duration);
        result.display(i+1);
        cout<<"\n";
    }
    return 0;
}

