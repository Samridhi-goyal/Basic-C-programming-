//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    int length,width,perimeter,area;
    printf("Enter the length of rectangle \n");
    scanf("%d" ,&length);
    printf("Enter the width of rectangle \n");
    scanf("%d" ,&width);
    area = length*width;
    perimeter = 2*(length+width);
    printf("The area and perimeter of rectangle respectively is %d and %d" ,area ,perimeter);

    return 0;
}
