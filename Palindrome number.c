//Q32: Write a program to check if a number is a palindrome.


#include <stdio.h>

int main()
{
    int i,n,a,s,reverse=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    s=n;
    while(n>0)
    {
        a=n%10;
        reverse=(reverse*10)+a;
        n=n/10;
    }
    if(reverse==s)
    printf("Palindrome number");
    else
    printf("Not a Palindrome number");
    return 0;
}