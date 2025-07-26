#include<stdio.h>
int main()
{
    int a,b;
    printf("1st player enter the number:\n");
    scanf("%d",&a);
    printf("2nd player guesss the number:\n");
    scanf("%d",&b);
    if(a==b)
    {
        printf("Player 2 wins");
    }
    else
    {
        printf("Wrong,2 chances left\n2nd player guesss the number again:");
        scanf("%d",&b);
        if(a==b)
        {
            printf("Player 2 wins");
        }
        else
        {
            printf("Wrong,1 chances left\n2nd player guesss the number again:");
            scanf("%d",&b);
            if(a==b)
            {
                printf("Player 2 wins");
            }
            else
            {
                printf("Player 1 wins");
            }
        }
    }
    return 0;
}

