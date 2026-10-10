#include<stdio.h>
int main ()
{
    int num1,num2,add , diff , multiplication, divide;
    printf("\n Enter the two nos");
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    diff=num1-num2;
    multiplication=num1*num2;
    divide=num1/num2;
    printf("add=%d\n",num1+num2);
    printf("diff=%d\n",num1-num2);
    printf("multiplication=%d\n",num1*num2);
    printf("divide=%d\n",num1/num2);
    return 0;
    
}