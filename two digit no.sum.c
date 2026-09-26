#include<stdio.h>
int main()
{
    int a,sum;
    printf("enter a Two digit number");
    scanf("%d",&a);
    if(a>=10 && a<=99)
    {
        sum=a/10+a%10;
        printf("sum of digits is %d",sum);
    }
    else
    {
        printf("not a two digit number");
    }
    return 0;
}
