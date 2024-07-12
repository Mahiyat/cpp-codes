#include<iostream>
using namespace std;

void sum(float* f1, float* f2, float* f3, int l)
{
    int i;
    for(i=0;i<l;i++)
    {
        *(f3+i)=*(f1+i)+*(f2+i);
    }
}

int main()
{
    float a1[105]={1,2.4,3,4.5,5},a2[105]={6,7.5,8,9.9,10},a3[105];
    int n=5,i;
    sum(a1,a2,a3,n);
    cout<<"Elements of first array:\n";
    for(i=0;i<n;i++)
    {
        cout<<*(a1+i)<<" ";
    }
    cout<<"\n\nElements of second array:\n";
    for(i=0;i<n;i++)
    {
        cout<<*(a2+i)<<" ";
    }
    cout<<"\n\nElements of third array:\n";
    for(i=0;i<n;i++)
    {
        cout<<*(a3+i)<<" ";
    }
    cout<<"\n";
    return 0;
}
