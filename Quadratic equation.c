//Q17: Write a program to find the roots of a quadratic equation and categorize them.



#include <stdio.h>
#include <math.h>

int main()
{
   
   int a,b,c;
   double d,x,y;
   printf("Enter the value of a,b,c to form to quadratic equation \n");
   scanf("%d %d %d",&a,&b,&c);
   d=(b*b)-(4*a*c);
   x=(-b+sqrt(d))/(2*a);
   y=(-b-sqrt(d))/(2*a);
   if(d>0&&x!=y)
   {
      printf("Roots are real and distinct: %.2lf and %.2lf",x,y);
   }
   else if(d==0&&x==y)
   {
      printf("Roots are real and same: %.2lf ",x);
   }
   else
   {
      printf("Roots are complex");
   }

    return 0;
}
