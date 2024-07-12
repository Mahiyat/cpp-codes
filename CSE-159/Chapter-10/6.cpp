#include<iostream>
#include<cstring>
using namespace std;

int compstr(char* s1, char* s2)
{
    int f=0,i;
    for(i=0;i<5;i++)
    {
        if(*s1>*s2)
        {
            f=1;
            break;
        }
        else if(*s1<*s2)
        {
            f=-1;
            break;
        }
        s1++;
        s2++;
    }
    return f;
}

int main()
{
    char* str1="Hello";
    char* str2="hello";
    int a1,a2,a3;
    a1=compstr(str1,str2);
    a2=compstr(str2,str1);
    a3=compstr(str1,str1);
    cout<<a1<<endl<<a2<<endl<<a3<<endl;
    return 0;
}
