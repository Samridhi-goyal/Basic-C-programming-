//Q35: Write a program to print all factors of a given number.



#include <stdio.h>

int main()
{
    int i,num;
    printf("Enter a number \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        printf("The factor of %d is %d \n",num,i);
    }
    return 0;
}