#include<iostream>
using namespace std;

const int LIMIT=10;

class matrix
{
    int n,m,arr[LIMIT][LIMIT];
public:
    matrix(int i, int j):n(i),m(j){}
    void putel(int i, int j, int v)
    {
        if(i<0||i>n-1||j<0||j>m-1)
        {
            cout<<"Array out of bounds!\n";
            return;
        }
        else arr[i][j]=v;
    }
    int getel(int i, int j)
    {
        if(i<0||i>n-1||j<0||j>m-1)return -1;
        else return arr[i][j];
    }
};

int main()
{
    matrix m1(3,4);
    int temp=12345;
    m1.putel(2,3,temp);
    temp=m1.getel(2,3);
    if(temp==-1)cout<<"Array out of bounds!\n";
    else cout<<temp<<endl;
    return 0;
}
