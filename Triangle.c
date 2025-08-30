//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the first side of a triangle \n");
    scanf("%d",&a);
    printf("Enter the second side of a triangle \n");
    scanf("%d",&b);
    printf("Enter the third side of a triangle \n");
    scanf("%d",&c);
    if (a==b && b==c && c==a)
    {
        printf("It is an equilateral triangle \n");
    }
    else if (a==b || b==c || c==a)
    {
        printf("  It is an isoceles triangle \n");
    }
    else
    {
        printf("It is an scalene triangle \n");
    }


    return 0;
}