//Q34: Write a program to check if a number is prime.


#include <stdio.h>

int main()
{
    int i,n,c=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }
     if (c==0)
    printf("Prime number");
    else
    printf("Not a prime number");

    return 0;
}
