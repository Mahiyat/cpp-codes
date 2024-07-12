#include<iostream>
using namespace std;

int main()
{
    int a,s=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)  //taking input of n numbers using loop
    {
        cin>>a;
        s+=a;  //calculating sum
    }
    cout<<s<<endl;
    return 0;
}

