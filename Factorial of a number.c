//Q29: Write a program to calculate the factorial of a number.


 #include <stdio.h>
 int main()
 {
    int i,n,factorial=1;
    printf("Enter the number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of %d is: %d",n,factorial);
    return 0;
 }