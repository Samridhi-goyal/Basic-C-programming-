//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main()
{
    int num,i,sum=0,num_copy,factorial,a;
    printf("Enter a number \n");
    scanf("%d",&num);
    num_copy=num;
    while(num>0)
    {
        a=num%10;
        factorial=1;
        for(i=1;i<=a;i++)
        {
          factorial=factorial*i;  
        }
        sum=sum+factorial;
        num=num/10;
    }
    if(sum==num_copy)
    printf("Strong number");
    else
    printf("Not a Strong number");
    return 0;
}