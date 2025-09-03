//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.





#include <stdio.h>

int main()
{
    int a,b,result;
    char sc;
    printf("Enter the special character whose operatiom you want to perform \n");
    scanf("%c",&sc);
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    switch(sc)
    {
        case '+':
        result=a+b;
        break;
        case '-':
        result=a-b;
        break;
        case '*':
        result=a*b;
        break;
        case '%':
        result=a%b;
        break;
        case '/':
        result=a/b;
        break;
        default:
        printf("Wrong special character");
        
    }
    printf("RESULT: %d",result);
    
    return 0;
}