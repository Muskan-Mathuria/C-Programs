#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%3==0){
        printf("divisible by 3");
    }
    else{
        printf("not divisible by 3");
    }
    return 0;
}
