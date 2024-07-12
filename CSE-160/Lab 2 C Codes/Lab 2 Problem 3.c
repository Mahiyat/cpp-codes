#include<stdio.h>
int main()
{
    int a;
    long long b;
    char c;
    float d;
    double e;
    //taking input at a time
    scanf("%d %lld %c %f %lf",&a,&b,&c,&d,&e); //space given for avoiding it in input
    printf("int value = %d\n",a);
    printf("long value = %lld\n",b);
    printf("char value = %c\n",c);
    printf("float value = %.3f\n",d); //displaying float number upto 3 decimal places
    printf("double value = %.9lf\n",e); //displaying double number upto 9 decimal places
    return 0;
}

