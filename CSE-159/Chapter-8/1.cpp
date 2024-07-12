#include<iostream>
using namespace std;

class Distance
{
    double feet,inch;
public:
    Distance():feet(0.0),inch(0.0){}
    Distance(double f, double i):feet(f),inch(i){}
    Distance operator - (Distance d2)
    {
        double f1,f2,f,i,fd;
        f1=(feet*12.0)+inch;
        f2=(d2.feet*12.0)+d2.inch;
        if(f1<f2)swap(f1,f2);
        i=f1-f2;
        int fi;
        f=i/12.0;
        fi=static_cast<int>(f);
        fd=(double)fi;
        i=(f-fd)*12.0;
        return Distance(fd,i);
    }
    void display()
    {
        cout<<"Required distance is "<<feet<<"\' - "<<inch<<"\"\n";
    }
};

int main()
{
    Distance d1(5,4.5),d2(1,4.5),d3;
    d3=d1-d2;
    d3.display();
    return 0;
}
