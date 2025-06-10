#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, sq;
    printf("Enter "
           "X"
           " and "
           "Y"
           ": ");
    scanf("%d %d", &x, &y);
    if (x > y)
    {
        while (x > y)
        {
            sq = pow(x, 2);
            printf("%d, ", sq);
            x--;
        }
        printf("Reached!");
    }
    else if (x < y)
    {
        while (x < y)
        {
            sq = pow(x, 2);
            printf("%d, ", sq);
            x++;
        }
        printf("Reached!");
    }
    else
    {
        printf("Reached!");
    }

    return 0;
}