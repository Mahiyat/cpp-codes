#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;

class bmoney
{
    long double money;
public:
    bmoney():money(0.0){}
    bmoney(char s[])
    {
        char tmp[30];
        int i,j,n=strlen(s);
        for(i=0,j=0;i<n;i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                tmp[j]=s[i];
                j++;
            }
        }
        tmp[j]='\0';
        money=_atold(tmp);
    }
};

int main()
{

    return 0;
}
