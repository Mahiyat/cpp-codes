#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0) //checking if number is even
    {
        printf("%d is even number.\n",n);
    }
    else //condition false means number is odd
    {
        printf("%d is odd number.\n",n);
    }
    return 0;
}

