#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>=10 && a<=99)
    {
        printf("2 digit number");
    }
    
    else if (a>=100 && a<=999)
    {
        printf("3 digit number");
    }
    return 0;
}
