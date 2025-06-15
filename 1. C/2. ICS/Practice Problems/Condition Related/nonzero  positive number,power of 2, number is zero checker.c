#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    switch (n > 0)
    {
    case 1:
        if ((n & (n - 1)) == 0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        break;
    case 0:
        if (n == 0)
        {
            printf("Zero isn't a valid input");
        }
        else
        {
            printf("Negative input isn't valid");
        }
        break;
    }

    return 0;
}