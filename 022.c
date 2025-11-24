
//Q22: Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>

int main()
{
   
   float cp,sp,p,l,pp,lp;
   printf("Enter the cost price and selling price \n");
   scanf("%f %f",&cp,&sp);
   if (sp>cp)
   {
      p=sp-cp;
      pp=(p/cp)*100;
      printf("Profit percentage is %.2f%%",pp);
   }
   else if(cp>sp)
   {
       l=cp-sp;
       lp=(l/cp)*100;
       printf("Loss percentage is %.2f%%",lp);

   }
   else
   {
        printf("Neither loss nor profit");

   }
   

    return 0;
}
