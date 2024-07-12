#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b) //checking if the numbers are equal
    {
        cout<<a<<"="<<b<<endl;
    }
    //checking next condition if previous one is false
    else if(a<b)
    {
        cout<<a<<"<"<<b<<endl;
    }
    //printing else statement if both conditions are false
    else
    {
        cout<<a<<">"<<b<<endl;
    }
    return 0;
}

