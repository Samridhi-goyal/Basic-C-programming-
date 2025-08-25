//Q7: Write a program to swap two numbers without using a third variable.



#include <stdio.h>

int main()
{
  int a,b;
  printf("Please Enter Two Numbers. \n");
  scanf("%d %d",&a ,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("The number a and b after swapping respectively are %d and %d",a ,b);
  
    return 0;
}