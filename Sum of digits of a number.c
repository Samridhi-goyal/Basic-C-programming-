//Q38: Write a program to find the sum of digits of a number.


#include <stdio.h>

int main()
{
    int sum=0,num,a;
    printf("Enter a number \n");
    scanf("%d",&num);
    while(num>0)
    {
        a=num%10;
        sum=sum+a;
        num=num/10;
    }
    printf("The sum of digits of is: %d",sum);
    return 0;
}