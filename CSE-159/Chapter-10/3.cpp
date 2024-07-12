#include<iostream>
#include<cstring>
using namespace std;

const int Days=7;

void order(char** s1,char** s2)
{
    if(strcmp(*s1,*s2)>0)
    {
        char* tmp=*s1;
        *s1=*s2;
        *s2=tmp;
    }
}

void bsort(char** s)
{
    int i,j;
    for(i=0;i<Days-1;i++)
    {
        for(j=i+1;j<Days;j++)
        {
            order(s+i,s+j);
        }
    }
}

int main()
{
    char* arrptrs[Days]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    cout<<"Before Sorting:\n";
    for(int i=0;i<Days;i++)
    {
        cout<<arrptrs[i]<<"\n";
    }
    bsort(arrptrs);
    cout<<"\nAfter Sorting:\n";
    for(int i=0;i<Days;i++)
    {
        cout<<arrptrs[i]<<"\n";
    }
    return 0;
}
