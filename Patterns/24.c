#include <stdio.h>

int main()
{
    int i, j;
    for(i=1; i<5; i++)
    {
        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }
        for(j=i; j<=5; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=(2*5 - 2*i); j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

