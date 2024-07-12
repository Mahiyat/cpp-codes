#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);
    string s;
    int r;
    float cg;
    for(int i=1;i<=10;i++)
    {
        cin>>r>>cg;
        cin.ignore();
        getline(cin,s);
        cout<<"Roll: "<<r<<" Name: "<<s<<" CGPA: "<<cg<<endl;
    }
    return 0;
}

