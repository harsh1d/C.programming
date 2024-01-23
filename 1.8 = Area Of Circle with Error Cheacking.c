#include<stdio.h>
#define PI 3.14159

/* AREA OF CIRCLE WITH ERROR CHECKING */

float process(float radius);

int main()
{
    float radius, area;

    printf("Radius = ");
    scanf("%f", &radius);

    if (radius < 0)
        area = 0;
    else
        area = process(radius);

    printf("Area = %f", area);
    return 0;
}

float process(float r)     /*FUNCTION DEFINITION */
{
    float a;               /*LOCAL VARIABLE DECLARATION */

    a = PI * r * r;
    return a;
}
