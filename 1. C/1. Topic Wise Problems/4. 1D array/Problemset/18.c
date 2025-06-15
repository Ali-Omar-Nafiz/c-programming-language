#include <stdio.h>
#include <limits.h>

int main()
{
    int n, m = 0;
    printf("Enter the 'N': ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - m; i++)
    {
        for (int j = i + 1; j < n - m; j++)
        {
            if (arr[i] == arr[j])
            {

                for (int k = j; k < n - m; k++)
                {

                    arr[k] = arr[k + 1];
                }
                m++;
            }
        }
    }
    printf("m=%d\n", m);
    for (int i = 0; i < n - m; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
