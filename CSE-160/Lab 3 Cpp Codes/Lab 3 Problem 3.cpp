#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    float pi=3.14159;
    cout<<"Enter the value of n: ";
    cin>>n;
    printf("Rounding up to first 3 digit after its decimal point ");
    printf("%.3f\n",pi);
    cout<<"Rounding up to first n digit after its decimal point ";
    cout<<fixed<<setprecision(n)<<pi<<endl;
    return 0;
}

