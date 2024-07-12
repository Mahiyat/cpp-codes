#include<iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;
public:
    Distance():feet(0),inches(0.0){}
    Distance(float fltfeet)
    {
        feet=(int)fltfeet;
        inches=12*(fltfeet-feet);
    }
    Distance(int ft, float in):feet(ft),inches(in){}
    void showdist()
    {
        cout<<feet<<"\'-"<<inches<<"\"\n";
    }
    friend Distance operator * (Distance,Distance);
};

Distance operator * (Distance d1, Distance d2)
{
    float i1,i2,i;
    int f=0;
    i1=(float)d1.feet*12.0+d1.inches;
    i2=(float)d2.feet*12.0+d2.inches;
    i=i1*i2;
    while(i>=12.0)
    {
        i-=12.0;
        f++;
    }
    return Distance(f,i);
}

int main()
{
    Distance d1=2.5;
    Distance d2=1.25;
    Distance d3;
    cout<<"d1 = ";
    d1.showdist();
    cout<<"d2 = ";
    d2.showdist();
    d3=d1*d2;
    cout<<"d3 = ";
    d3.showdist();
    d3=d1*7.5;
    cout<<"d3 = ";
    d3.showdist();
    d3=7.5*d2;
    cout<<"d3 = ";
    d3.showdist();
    return 0;
}
