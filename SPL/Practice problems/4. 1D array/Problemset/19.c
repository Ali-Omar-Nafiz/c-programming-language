#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the n:");
    scanf("%d", &n);
    int N[n];
    for (int i = 0; i < n; i++)
    {
        printf("N[%d]=", i);
        scanf("%d", &N[i]);
    }
    printf("Enter the m:");
    scanf("%d", &m);
    if (m % 2 != 0)
    {
        printf("\"Please enter a positive number!\"");
        return 1;
    }
    int M[m];
    for (int i = 0; i < m; i++)
    {
        printf("M[%d]=", i);
        scanf("%d", &M[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (N[i] == M[j])
                printf("%d ", M[j]);
        }
    }

    return 0;
}