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
    time operator ++ ()
    {
        if(seconds<59)++seconds;
        else
        {
            seconds=0;
            if(minutes<59)++minutes;
            else
            {
                minutes=0;
                ++hours;
            }
        }
        return time(hours,minutes,seconds);
    }
    time operator ++ (int)
    {
        if(seconds<59)seconds++;
        else
        {
            seconds=0;
            if(minutes<59)minutes++;
            else
            {
                minutes=0;
                hours++;
            }
        }
        return time(hours,minutes,seconds);
    }
    time operator -- ()
    {
        if(seconds>0)--seconds;
        else
        {
            seconds=59;
            if(minutes>0)--minutes;
            else
            {
                minutes=59;
                --hours;
            }
        }
        return time(hours,minutes,seconds);
    }
    time operator -- (int)
    {
        if(seconds>0)seconds--;
        else
        {
            seconds=59;
            if(minutes>0)minutes--;
            else
            {
                minutes=59;
                hours--;
            }
        }
        return time(hours,minutes,seconds);
    }
};

int main()
{
    time t1(6,50,30),t2(5,30,59);
    ++t1;
    t1.display();
    t2++;
    t2.display();
    t1--;
    t1.display();
    --t2;
    t2.display();
    return 0;
}


