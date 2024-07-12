#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int r,m,i;
    string s;
    cin>>s>>r>>m;
    cout<<"|"<<setiosflags(ios::left)<<setw(30)<<"Name";
    cout<<"|"<<setiosflags(ios::left)<<setw(10)<<"Roll";
    cout<<"|"<<setiosflags(ios::left)<<setw(10)<<"  Marks"<<"|"<<endl;
    for(i=1;i<=54;i++)
    {
        cout<<"-";
    }
    cout<<endl;
    cout<<"|"<<setiosflags(ios::left)<<setw(30)<<s;
    cout<<"|"<<setiosflags(ios::left)<<setw(10)<<r;
    cout<<"|"<<setiosflags(ios::left)<<setw(10)<<m<<"|"<<endl;
    for(i=1;i<=54;i++)
    {
        cout<<"-";
    }
    cout<<endl;
    return 0;

}

