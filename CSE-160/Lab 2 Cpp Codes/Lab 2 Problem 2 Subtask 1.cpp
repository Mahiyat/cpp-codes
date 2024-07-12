#include<iostream>
using namespace std;

int main()
{
    int a,s=0;
    for(int i=1;i<=3;i++)  //using loop for taking input 3 times
    {
        cin>>a;
        s+=a;  //calculating sum
    }
    cout<<s<<endl;
    return 0;
}

