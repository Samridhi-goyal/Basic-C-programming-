//Q30: Write a program to reverse a given number


 #include <stdio.h>
 int main()
 {
    int a,n,reverse=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    while(n>0)
    {
      a=n%10;
      reverse=(reverse*10)+a;
      n=n/10;
    }
    printf("The reverse of the number is: %d",reverse);
    return 0;
 }
