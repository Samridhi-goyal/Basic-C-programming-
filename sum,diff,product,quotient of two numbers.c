


// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main()
{
    int num1,num2,sum,diff,product,quotient;
    printf("Enter first number \n");
    scanf("%d" ,&num1);
    printf("Enter second number \n");
    scanf("%d" ,&num2);
    sum=num1+num2;
    diff=num1-num2;
    product=num1*num2;
    quotient=num1/num2;
    printf("The sum of two numbers is %d \n" ,sum);
    printf("The differnce of two numbers is %d \n" ,diff);
    printf("The product of two numbers is %d \n" ,product);
    printf("The quotient of two numbers is %d \n" ,quotient);

    return 0;
}