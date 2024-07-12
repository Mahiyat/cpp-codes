#include<iostream>
using namespace std;

int main()
{
    int a0[10],a1[10],a2[10],a3[10],a4[10],a5[10],a6[10],a7[10],a8[10],a9[10];
    int* ap[10];
    ap[0]=a0;
    ap[1]=a1;
    ap[2]=a2;
    ap[3]=a3;
    ap[4]=a4;
    ap[5]=a5;
    ap[6]=a6;
    ap[7]=a7;
    ap[8]=a8;
    ap[9]=a9;
    int i,j,k=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            ap[i][j]=k*10;
            k++;
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            cout<<ap[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
