#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int r,m,i;
    string s;
    cin>>s>>r>>m;
    cout<<"|"<<setw(30)<<"Name";
    cout<<"|"<<setw(10)<<"Roll";
    cout<<"|"<<setw(10)<<"Marks"<<"|"<<endl;
    for(i=1;i<=54;i++)
    {
        cout<<"-";
    }
    cout<<endl;
    cout<<"|"<<setw(30)<<s;
    cout<<"|"<<setw(10)<<r;
    cout<<"|"<<setw(10)<<m<<"|"<<endl;
    for(i=1;i<=54;i++)
    {
        cout<<"-";
    }
    cout<<endl;
    return 0;

}

