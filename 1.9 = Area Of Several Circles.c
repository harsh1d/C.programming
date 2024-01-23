#include<stdio.h>
#define PI 3.14159

/*PROGRAM OF AREA OF CIRCLE USING FOR LOOP */

main()

{
    float radius, area;                             /*VARIABLE DECLARATION */
    int count, n;                                   /*VARIABLE DECLARATION */
    float process(float radius);                    /*FUNCTION DECLARATION */

    printf("How Many Circles ? ");
    scanf("%d",&n);

    for (count = 1; count <= n; ++count)
    {
        printf(" \n Circle no. %d: Radius = ", count);
        scanf("%f", &radius);

        if (radius < 0)
            area = 0;
        else
            area = process(radius);

        printf("Area = %f \n ", area);
    }
}
float process(float r)                          /*FUNCTION DEFINITION */
{
    float a;                                    /*LOACAL VARIABLE DECLARATION */

    a = PI *r*r;
    return(a);
}
