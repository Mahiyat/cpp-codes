#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==b) //checking if the numbers are equal
    {
        printf("%d=%d\n",a,b);
    }
    //checking next condition if previous one is false
    else if(a<b)
    {
        printf("%d<%d\n",a,b);
    }
    //printing else statement if both conditions are false
    else
    {
        printf("%d>%d\n",a,b);
    }
    return 0;
}

