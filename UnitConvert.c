#include <stdio.h>
#define C (5*(F-32))/9
#define KG 0.4536*POUNDS
#define CM 2.54*INCHES
#define LITER 3.785*GALLONS

int main()
{
    double F,POUNDS,INCHES,GALLONS;
    printf("This is a Unit Conversion Tool.\n");
    printf("Please enter degrees in Fahrenheit:");
    if(scanf("%lf", &F) < 1)
    {
        printf("Input error!");
        return 1;
    }
    printf("%0.2f F = %0.2f C\n",F,C);
    printf("Please enter weight in pounds:");
    if(scanf("%lf", &POUNDS) < 1)
    {
        printf("Input error!");
        return 1;
    }
    printf("%0.2f Pounds = %0.2f Kilograms\n",POUNDS,KG);
    printf("Please enter length in inches:");
    if(scanf("%lf", &INCHES) < 1)
    {
        printf("Input error!");
        return 1;
    }
    printf("%0.2f Inch = %0.2f cm\n",INCHES,CM);
    printf("Please enter capacity in gallons:");
    if(scanf("%lf", &GALLONS) < 1)
    {
        printf("Input error!");
        return 1;
    }
    printf("%0.2f Gallons = %0.2f Liters\n",GALLONS,LITER);
    return 0;
}
