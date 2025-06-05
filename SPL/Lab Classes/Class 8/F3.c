#include <stdio.h>

int G = 10;

int peakNumber(int a);
int prime(int a);
int palindrome(int a);

int main()
{
    int range1, range2;
    scanf("%d %d", &range1, &range2);
    for (int k = range1; k <= range2; k++)
    {
        if (peakNumber(k) == 1)
        {
            printf("%d ", k);
        }
        // else
        // {
        //     printf("Not Peak Number");
        // }
    }

    return 0;
}

int peakNumber(int a)
{
    int flag1 = palindrome(a);
    int flag2 = prime(a);
    if (flag1 == 1 && flag2 == 1)
    {
        return 1;
    }
    else
        return 0;
}

int palindrome(int a)
{

    int rev = 0;
    int temp = a;

    while (temp != 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if (a == rev)
        return 1;
    else
        return 0;
}

int prime(int a)
{
    int status = 1;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            status = 0;
            break;
        }
    }

    if (status == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}