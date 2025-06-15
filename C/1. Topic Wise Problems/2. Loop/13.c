#include <stdio.h>
int main()
{
    int n, m = 1;
    scanf("%d", &n);
    printf("%d! = ", n);

    while(n > 0)
    {
        printf("%d", n);
        if (n > 1)
        {
            printf(" X "); 
        }
        m *= n;
        n--;
    }

    printf(" = %d\n", m); 
    return 0;
}
