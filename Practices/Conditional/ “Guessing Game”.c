#include <stdio.h>

int main()
{
    int pick, guess;
    printf("Player 1:\nPick a number: ");
    scanf("%d", &pick);
    printf("Player 2:\nGuess the number: ");
    scanf("%d", &guess);
    switch (pick == guess)
    {
    case 1:
        printf("Right, Player-2 wins!\n");
        break;
    case 0:
        printf("Wrong, 2 Chance(s) Left!\nPlayer 2:\nGuess the number again: ");
        scanf("%d", &guess);
        if (pick == guess)
        {
            printf("Right, Player-2 wins!\n");
        }
        else
        {
            printf("Wrong, 1 Chance(s) Left!\nPlayer 2:\nGuess the number again: ");
            scanf("%d", &guess);
            if (pick == guess)
            {
                printf("Right, Player-2 wins!\n");
            }
            else
            {
                printf("Wrong, Player-1 wins!\n");
            }
        }
        break;
    }

    return 0;
}
