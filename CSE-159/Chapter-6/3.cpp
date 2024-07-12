#include<iostream>
using namespace std;

class time
{
    int hours,minutes,seconds;
public:
    time():hours(0),minutes(0),seconds(0)
    {}
    time(int h, int m, int s):hours(h),minutes(m),seconds(s)
    {}
    void display()
    {
        cout<<"The time is "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
    void add(time t1, time t2)
    {
        int a,b,c;
        a=(t1.hours*3600)+(t1.minutes*60)+t1.seconds;
        b=(t2.hours*3600)+(t2.minutes*60)+t2.seconds;
        c=a+b;
        hours=c/3600;
        c%=3600;
        minutes=c/60;
        seconds=c%60;
    }
};

int main()
{
    const time t1(6,50,30),t2(5,30,59);
    time t3;
    t3.add(t1,t2);
    t3.display();
    return 0;
}
