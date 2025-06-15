#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Player 1 enter:");
    scanf("%d",&n1);
    printf("Player 2 guess:");
    scanf("%d",&n2);
    if(n1==n2)
    {
        printf("Player 2 wins");
    }
    else
    {
        printf("2 chances left. Enter again:\n");
        scanf("%d",&n2);
        if(n2==n1)
        {
            printf("player 2 wins");
        }
        else
        {
            printf("1 chances left. Enter again:\n");
        scanf("%d",&n2);
        if(n2==n1)
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