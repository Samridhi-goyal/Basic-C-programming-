//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, n1, firstDigit, lastDigit, digits = 0, middlePart, result;

    printf("Enter the number: ");
    scanf("%d", &n);
    n1 = n;
    lastDigit = n % 10;
    int temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    firstDigit = temp;
    int power = pow(10, digits); 
    middlePart = n1 % power;      
    middlePart = middlePart / 10; 
    result = lastDigit * power + middlePart * 10 + firstDigit;
    printf("Number after swapping first and last digits: %d\n", result);
    return 0;
}
