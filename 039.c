//Q39: Write a program to find the product of odd digits of a number.


#include <stdio.h>

int main()
{
    int product=1,num,a;
    printf("Enter a number \n");
    scanf("%d",&num);
    while(num>0)
    {
        a=num%10;
        if(a%2!=0)
        {
        product=product*a;
        }
        num=num/10;
    }
    printf("The product of odd digits of a number is: %d",product);
    return 0;
}
