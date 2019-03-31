#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void distance();
void temperature();
int main()
{
    temperature();
    distance();
    return 0;
}
void temperature()
{
    float ftmp,ctmp;
    printf("enter temperature in farenheit scale : ");
    scanf("%f",&ftmp);
    ctmp=(ftmp-32)*5/9;
    printf("\ntemperature in celsius scale is: %.2f",ctmp);

}

void distance()
{
    float indist,cmdist;
    printf("\n\nEnter distance in inches: ");
    scanf("%f",&indist);
    cmdist=2.54*indist;
    printf("\ndistance in cm: %.2f\n\n",cmdist);
}
