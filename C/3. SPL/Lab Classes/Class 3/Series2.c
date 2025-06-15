#include <stdio.h>
/*
Problem 2
*/
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = n; i >=1; i--)
    {
        printf("%d", i);
        if (i != 1)
        {
            if (i % 2 != 0)
            {
                printf(" + ");
            }
            else
            {
                printf("^2.");
            }
        }
    }

    return 0;
}