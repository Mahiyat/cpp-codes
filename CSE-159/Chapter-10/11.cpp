#include<iostream>
using namespace std;

class Array
{
    int *ap[10];
    int a,b;
public:
    Array()
    {
        for(int i=0;i<10;i++)
        {
            *(ap+i)=new int[10];
        }
    }
    int operator [] (int n)
    {
        return ap[a][b];
    }
    void arr_assign()
    {
        int i;
        a=0;
        b=0;
        for(i=0;i<100;i++)
        {
            ap[i]=i*10;
            if((i+1)%10==0)
            {
                b=0;
                a++;
            }
            else b++;
        }
    }
    void arr_display()
    {
        int i;
        a=0;
        b=0;
        for(i=0;i<100;i++)
        {
            cout<<*ap[i]<<" ";
            if((i+1)%10==0)
            {
                b=0;
                a++;
            }
            else b++;
        }
        cout<<"\n";
    }
};

int main()
{
    Array ar;
    ar.arr_assign();
    ar.arr_display();
//    int *ap[10];
//    int i,j,c,d;
//    for(i = 0;i < 10;i++)
//    {
//        *(ap+i) = new int[10];
//    }
//    for(i = 0;i < 10;i++)
//    {
//        for(j = 0;j < 10;j++)
//        {
//            ap[i][j] = ((i*10) + j) * 10;
//        }
//    }
//    for(i = 0;i < 10;i++)
//    {
//        for(j = 0;j < 10;j++)
//        {
//            cout << ap[i][j] << " ";
//        }
//        cout << endl;
//    }
    return 0;
}
