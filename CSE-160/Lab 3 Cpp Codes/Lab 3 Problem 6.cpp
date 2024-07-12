#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

struct student{
int roll;
float cgpa;
string name;
};

bool srt1(student s1, student s2)
{
    return (s1.roll<s2.roll);
}

bool srt2(student s1, student s2)
{
    return (s1.cgpa<s2.cgpa);
}

bool srt3(student s1, student s2)
{
    return (s1.name<s2.name);
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output2.txt","w",stdout);
    student s[15];
    int i,n=10;
    for(i=0;i<n;i++)
    {
        cin>>s[i].roll>>s[i].cgpa;
        cin.ignore();
        getline(cin,s[i].name);
    }

    sort(s,s+n,srt3);
    cout<<"After sorting name wise:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<s[i].roll<<" "<<s[i].cgpa<<" "<<s[i].name<<endl;
    }
    cout<<endl;
    sort(s,s+n,srt1);
    cout<<"After sorting roll wise:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<s[i].roll<<" "<<s[i].cgpa<<" "<<s[i].name<<endl;
    }
    cout<<endl;
    sort(s,s+n,srt2);
    cout<<"After sorting cgpa wise:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<s[i].roll<<" "<<s[i].cgpa<<" "<<s[i].name<<endl;
    }
    return 0;
}

