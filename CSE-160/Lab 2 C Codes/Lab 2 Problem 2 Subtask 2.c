#include<stdio.h>
int main()
{
    int a,i,s=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)  //taking input of n numbers using loop
    {
        scanf("%d",&a);
        s+=a;  //calculating sum
    }
    printf("%d\n",s);
    return 0;
}

