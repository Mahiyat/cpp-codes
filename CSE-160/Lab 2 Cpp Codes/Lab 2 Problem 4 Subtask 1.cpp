#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0) //checking if number is even
    {
        cout<<n<<" is even number."<<endl;
    }
    else //condition false means number is odd
    {
        cout<<n<<" is odd number."<<endl;
    }
    return 0;
}

