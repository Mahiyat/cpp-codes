#include<iostream>
using namespace std;

const int LIMIT=15;

class safearay
{
    int arr[LIMIT];
public:
    void putel(int i, int v)
    {
        if(i<0||i>LIMIT-1)
        {
            cout<<"Array out of bounds!\n";
            return;
        }
        else arr[i]=v;
    }
    int getel(int i)
    {
        if(i<0||i>LIMIT-1)return -1;
        else return arr[i];
    }
};

int main()
{
    safearay sa1;
    int temp=12345;
    sa1.putel(7,temp);
    temp=sa1.getel(7);
    if(temp==-1)cout<<"Array out of bounds!\n";
    else cout<<temp<<"\n";
    return 0;
}
