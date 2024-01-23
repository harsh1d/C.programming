#include<stdio.h>
main()
{
    int a, count;
    int funct1(int count);
    for (count = 1; count <= 5; ++count)
    {
        a = funct1(count);
        printf("%d",a);
    }
}

funct1(int x)
{
    int y = 0;

    y += x;
    return(y);
}
