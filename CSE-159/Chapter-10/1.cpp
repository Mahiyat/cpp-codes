#include<iostream>
using namespace std;

int main()
{
    int i,n;
    float f[105],sum=0.0,avg;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the numbers:\n";
    for(i=0;i<n;i++)
    {
        cin>>*(f+i);
    }
    for(i=0;i<n;i++)
    {
        sum+=*(f+i);
    }
    avg=sum/(float)n;
    cout<<"Required average is: "<<avg<<endl;
    return 0;
}
