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
        printf("%d ", N[i]);
    }
    
    for (int j = 0; j < m; j++)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[j] == N[i])
            {
                count++;
            }
        }
        if (count == 0)
            printf("%d ", M[j]);
    }

    return 0;
}