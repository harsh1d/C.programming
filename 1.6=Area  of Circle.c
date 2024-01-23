#include<stdio.h> /* LIBRARY FILE ACCESS */

/* PROGRAM TO CALCULATE THE AREA OF CIRCLE */  /* TITLE COMMENT */

main()                    /* FUNCTION HEADING */

{
    float radius,area;    /* VARIABLE DECLARATION */

    printf("Radius = "); /* OUTPUT STATEMENT (PROMPT) */
    scanf("%f",&radius);  /* INPUT STATEMENT */
    area = 3.14159 * radius * radius; /* ASSINGMMENT STATEMENT */
    printf("Area = %f", area);        /* OUTPUT STATEMENT */
}
