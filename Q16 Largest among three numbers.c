
//Q16: Write a program to input three numbers and find the largest among them using if–else.



#include <stdio.h>

int main()
{
   int a,b,c;
   printf("Enter three numbers \n");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b&&a>c)
   {
      printf("A is the largest number = %d",a);
   }
   else if(b>a&&b>c)
   {
      printf("B is the largest number = %d",b);
   }
   else
   {
      printf("C is the largest number = %d",c);
   }

    return 0;
}
