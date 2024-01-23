#include<stdio.h>
#define PI 3.14159
/* PROGRAM TO CALCULATE AREA OF CIRCLE */
main ()

{
    float radius, area ;            /*VARIABLE DECLARATION */
    float process (float radius);   /*FUNCTION DECLARATION */

    printf("Radius = ");
    scanf("%f",&radius);
    area = process (radius);
    printf("Area = %f", area);
}

float process (float r)              /*FUNCTION DEFINITION */

{
    float a;                         /* LOCAL VARIABLE DECLARATION */n

    a =PI * r* r;
    return(a);
}
