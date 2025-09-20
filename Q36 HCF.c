//Q36: Write a program to find the HCF (GCD) of two numbers.


#include <stdio.h>

int main()
{
    int num1,num2,c;
    printf("Enter two number \n");
    scanf("%d %d",&num1,&num2);
    while(num2!=0)
    {
        c=num1%num2;
        num1=num2;
        num2=c;
    }
    printf("HCF=%d",num1);
}