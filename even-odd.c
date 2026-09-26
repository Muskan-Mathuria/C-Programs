#include<stdio.h>
int main()
{

    int a,num;
    printf("enter a number");
    scanf("%d",&num);
    a=num%10;
    if(a%2==0){
        printf("Even number");
    
    }
    else{
        printf("odd number");
    }
}
