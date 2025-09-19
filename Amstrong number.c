//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main ()
{
    int a,n,sum=0,s;
    printf("Enter a number \n");
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        a=n%10;
        sum=sum+(a*a*a);
        n=n/10;
    }
    if(sum==s)
    printf("Amstrong number");
    else
    printf("Not a Amstrong number");
    return 0;
}