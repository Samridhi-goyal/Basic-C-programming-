//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.



#include <stdio.h>
#include<math.h>

int main()
{
  float p,r,t,n,si;
  float a,ci;
  printf("Enter the principal amount \n");
  scanf("%f",&p);
  printf("Enter the rate of interest \n");
  scanf("%f",&r);
  printf("Enter the time period \n");
  scanf("%f",&t);
  printf("Enter the no of compounding period \n");
  scanf("%f",&n);
  si=(p*r*t)/100;
  a = p * pow((1 + r / (n * 100)), n * t);  
  ci=a-p;
  printf("Simple Interest is %.0f \n",si);
  printf("Compound interest is %.2f \n",ci);
    return 0;
}
