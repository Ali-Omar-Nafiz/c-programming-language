#include <stdio.h>
int evenchecker(int k);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    (evenchecker(n) == 1) ? printf("Even") : printf("Odd");

    return 0;
}
int evenchecker(int k)
{
    return k % 2 == 0 ? 1 : 0;
}