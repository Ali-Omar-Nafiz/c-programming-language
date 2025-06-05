#include <stdio.h>
int PositiveNegativeChecker(int k);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    PositiveNegativeChecker(n) == 1 ? printf("Positive") : (PositiveNegativeChecker(n) == -1 ? printf("Negative") : printf("Zero"));

    return 0;
}
int PositiveNegativeChecker(int k)
{
    return (k > 0) ? 1 : ((k < 0) ? -1 : 0);

}