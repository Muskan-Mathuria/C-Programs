#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>=0&&a<=9){
        printf("number is a single digit");
    }
    else{
        printf("number is not a single digit");
    }
}
