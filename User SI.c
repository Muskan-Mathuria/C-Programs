#include<stdio.h>
int main()
{
    int p,r,t;
    printf("Enter Principal");
    scanf("%d",&p);
    printf("Enter Rate");
    scanf("%d",&r);
    printf("Enter Time");
    scanf("%d",&t);
    int si=(p*r*t)/100;
    printf("Simple Interest=%d",si);
    return 0;

}
