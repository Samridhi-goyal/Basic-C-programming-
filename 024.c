/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/



#include <stdio.h>

int main()
{
    int units,bill,leftunits;
    printf("Enter the no of units consumed \n");
    scanf("%d",&units);
    if (units<=100)
    {
        bill=units*5;
        printf("Bill is %d",bill);
    }
    else if((units>100)&&(units<=200))
    {
        leftunits=units-100;
        bill=(100*5)+(leftunits*7);
        printf("Bill is %d",bill);
    }
    else if((units>200)&&(units<=300))
    {
        leftunits=units-200;
        bill=(100*5)+(100*7)+(leftunits*10);
        printf("Bill is %d",bill);
    }
    else
    {
        leftunits=units-300;
        bill=(100*5)+(100*7)+(100*10)+(leftunits*12);
        printf("Bill is %d",bill);

    }
    
    return 0;
}
