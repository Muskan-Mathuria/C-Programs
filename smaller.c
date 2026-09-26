#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    printf("\nEnter first number");
    scanf("%d",&a);
    printf("\nEnter second number");
    scanf("%d",&b);
    printf("\nThe numbers are %d and %d",a,b);

    if(a>b){
        printf("B is smaller");
    }
    else
    {
        printf("A is smaller");
    }

}
