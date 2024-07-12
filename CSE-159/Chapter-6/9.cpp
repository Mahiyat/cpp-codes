#include<iostream>
using namespace std;

class fraction
{
    long long numerator,denominator;
    char ch;
public:
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
};

int main()
{
    char c;
    fraction f1,f2,f3;
    do
    {
        f1.get_fraction();
        f2.get_fraction();
        f3.add_fraction(f1,f2);
        f3.display();
        cout<<"Do you want to enter another value (y/n)? ";
        cin>>c;
    }while(c=='y');
    return 0;
}
