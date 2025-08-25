//Q8: Write a program to find and display the sum of the first n natural numbers.




#include <stdio.h>

int main()
{
  int i,n,sum=0;
  printf("Please enter the value of n. \n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum = sum+i;  
  }
  printf("The sum of %d nnatural umbers is %d" ,n ,sum);
    return 0;
}