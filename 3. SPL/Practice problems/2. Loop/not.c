#include <stdio.h>
int main()
{
    int pick, n, guess;
    printf("Player 1 please pick a number: ");
    scanf("%d", &pick);
    printf("\nEnter the number of trials: ");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("\nPlayer 2 guess the number: ");
        scanf("%d", &guess);
        if (guess == pick)
        {
            printf("\nPlayer 2 wins!");
            break;
        }
        else
        {
            if (n == 1)
            {
                printf("\nPlayer 1 wins!");
            }
            else
            {
                printf("\nWrong! %d chances left: ", n - 1);
            }
        }

        n--;
    }

    return 0;
}