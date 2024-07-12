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
    time operator + (time t2)const
    {
        int a,b,c,h,m,s;
        a=(hours*3600)+(minutes*60)+seconds;
        b=(t2.hours*3600)+(t2.minutes*60)+t2.seconds;
        c=a+b;
        h=c/3600;
        c%=3600;
        m=c/60;
        s=c%60;
        return time(h,m,s);
    }
};

int main()
{
    const time t1(6,50,30),t2(5,30,59);
    time t3;
    t3=t1+t2;
    t3.display();
    return 0;
}

