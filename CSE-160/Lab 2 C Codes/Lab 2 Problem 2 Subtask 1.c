#include<stdio.h>
int main()
{
    int a,i,s=0;
    for(i=1;i<=3;i++)  //using loop for taking input 3 times
    {
        scanf("%d",&a);
        s+=a;  //calculating sum
    }
    printf("%d\n",s);
    return 0;
}

