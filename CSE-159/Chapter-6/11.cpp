#include<iostream>
#include<cmath>
using namespace std;

class fraction
{
    long long numerator,denominator;
    char ch;
public:
    fraction():numerator(0),denominator(1)
    {}
    fraction(long long n, long long d):numerator(n),denominator(d)
    {}
    void get_fraction()
    {
        cout<<"Enter the fraction in the format n/d: ";
        cin>>numerator>>ch>>denominator;
    }
    void display()
    {
        cout<<"The fraction is: "<<numerator<<"/"<<denominator<<endl;
    }
    void add_fraction(fraction f1, fraction f2)
    {
        numerator=(f1.numerator*f2.denominator)+(f1.denominator*f2.numerator);
        denominator=f1.denominator*f2.denominator;
    }
    void subtract_fraction(fraction f1, fraction f2)
    {
        numerator=(f1.numerator*f2.denominator)-(f1.denominator*f2.numerator);
        denominator=f1.denominator*f2.denominator;
    }
    void multiply_fraction(fraction f1, fraction f2)
    {
        numerator=f1.numerator*f2.numerator;
        denominator=f1.denominator*f2.denominator;
    }
    void divide_fraction(fraction f1, fraction f2)
    {
        numerator=f1.numerator*f2.denominator;
        denominator=f1.denominator*f2.numerator;
    }
    void lowterm()
    {
        long long tnum,tden,temp,gcd;
        tnum=labs(numerator);
        tden=labs(denominator);
        if(tnum<tden)
        {
            temp=tnum;
            tnum=tden;
            tden=temp;
        }
        do
        {
            temp=tnum%tden;
            tnum=tden;
            tden=temp;
        }while(tden!=0);
        gcd=tnum;
        numerator/=gcd;
        denominator/=gcd;
    }
};

int main()
{
    fraction f1(3,5),f2(4,5),f3;
    f3.add_fraction(f1,f2);
    f3.lowterm();
    f3.display();
    f3.subtract_fraction(f1,f2);
    f3.lowterm();
    f3.display();
    f3.multiply_fraction(f1,f2);
    f3.lowterm();
    f3.display();
    f3.divide_fraction(f1,f2);
    f3.lowterm();
    f3.display();
    return 0;
}

