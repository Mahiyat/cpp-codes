#include<iostream>
using namespace std;

int maxint(int a[], int n)
{
    int mx=0,ind,i;
    for(i=0;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            ind=i;
        }
    }
    return ind;
}

int main()
{
    int n=10,i,index;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    index=maxint(a,n);
    cout<<a[index]<<" "<<index<<endl;
    return 0;
}
