#include<iostream>
using namespace std;

void lowterm(int &nu, int &de)
    {
        long long tnum,tden,temp,gcd;
        tnum=labs(nu);
        tden=labs(de);
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
        nu/=gcd;
        de/=gcd;
    }

class fraction
{
    int numerator,denominator;
    char tmp;
public:
    fraction():numerator(0),denominator(1),tmp('/'){}
    fraction(int n, int d):numerator(n),denominator(d),tmp('/'){}
    fraction operator + (fraction f2)
    {
        int n,d;
        n=numerator*f2.denominator+f2.numerator*denominator;
        d=denominator*f2.denominator;
        lowterm(n,d);
        return fraction(n,d);
    }
    fraction operator - (fraction f2)
    {
        int n,d;
        n=numerator*f2.denominator-f2.numerator*denominator;
        d=denominator*f2.denominator;
        lowterm(n,d);
        return fraction(n,d);
    }
    fraction operator * (fraction f2)
    {
        int n,d;
        n=numerator*f2.numerator;
        d=denominator*f2.denominator;
        lowterm(n,d);
        return fraction(n,d);
    }
    fraction operator / (fraction f2)
    {
        int n,d;
        n=numerator*f2.denominator;
        d=denominator*f2.numerator;
        lowterm(n,d);
        return fraction(n,d);
    }
    friend istream& operator >> (istream& s, fraction& f);
    friend ostream& operator << (ostream& s, fraction& f);
};

istream& operator >> (istream& s, fraction& f)
{
    s>>f.numerator>>f.tmp>>f.denominator;
    return s;
}

ostream& operator << (ostream& s, fraction& f)
{
    s<<f.numerator<<f.tmp<<f.denominator;
    return s;
}

int main()
{
    fraction f1,f2,f3;
    char op,ch;
    do
    {
        cout<<"Enter the expression: ";
        cin>>f1>>op>>f2;
        switch(op)
        {
        case '+':
            f3=f1+f2;
            break;
        case '-':
            f3=f1-f2;
            break;
        case '*':
            f3=f1*f2;
            break;
        case '/':
            f3=f1/f2;
            break;
    }
    cout<<"Required fraction: "<<f3<<"\n";
    cout<<"Do another (y/n)? ";
    cin>>ch;
    }while(ch=='y');
    return 0;
}
