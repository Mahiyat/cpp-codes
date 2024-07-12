#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a;
    long long int b;
    char c;
    float d;
    double e;
    //taking input at a time
    cin>>a>>b>>c>>d>>e;
    cout<<"int value = "<<a<<endl;
    cout<<"long value = "<<b<<endl;
    cout<<"char value = "<<c<<endl;
    cout<<"float value = "<<fixed<<setprecision(3)<<d<<endl; //displaying float number upto 3 decimal places
    cout<<"double value = "<<fixed<<setprecision(9)<<e<<endl; //displaying double number upto 9 decimal places
    return 0;
}

