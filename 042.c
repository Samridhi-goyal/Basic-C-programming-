//Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>

int main()
{
    int num,i,sum=0,num_copy;
    printf("Enter a number \n");
    scanf("%d",&num);
    num_copy=num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num_copy)
    printf("Perfect number");
    else
    printf("Not a perfect number");
    return 0;
}
