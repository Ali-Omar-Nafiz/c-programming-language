#include <stdio.h>

int findReverse(int a)
{
    static int rev = 0;
    if (a == 0)
        return rev;
    // printf("%d", a % 10);
    rev = (rev * 10) + (a % 10);
    rev = findReverse(a / 10);
   // return rev;
}

void findReverse2(int a)
{
    int rev = 0;
    if (a == 0)
        return;
    printf("%d", a % 10);
    if ((a % 10) % 2 == 0)
        printf("$");
    else
        printf("+");

    findReverse2(a / 10);
}

int main()
{

    int x;
    scanf("%d", &x);
    // int reverseNum = findReverse(x);
    // printf("%d", reverseNum);
    findReverse2(x);
    return 0;
}
