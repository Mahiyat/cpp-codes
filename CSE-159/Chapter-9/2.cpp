#include<iostream>
#include<cstring>
using namespace std;

const int sz=80;

class String
{
protected:
    char st[sz];
public:
    String()
    {
        st[0]='\0';
    }
    String(char s[])
    {
        strcpy(st,s);
    }
    void display()
    {
        cout<<st<<"\n";
    }
    operator char*()
    {
        return st;
    }
};

class Pstring:public String
{
public:
    Pstring(char s[])
    {
        if(strlen(s)<=sz-1)strcpy(st,s);
        else
        {
            int i;
            for(i=0;i<sz-1;i++)
            {
                st[i]=s[i];
            }
            st[i]='\0';
        }
    }
};

int main()
{
    Pstring s1="This is a very long string which will probably or maybe certainly exceed the limit of sz.";
    cout<<"s1 = ";
    s1.display();
    Pstring s2="Hello";
    cout<<"s2 = ";
    s2.display();
    return 0;
}
