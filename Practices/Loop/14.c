#include <stdio.h>
int main()
{
    int n, r, t = 1, u = 1, v = 1, f;
    scanf("%d %d", &n, &r);
    int m;
    m = n - r;
    while (n > 0)
    {
        t = n * t;
        n--;
    }
    while (r > 0)
    {
        u = r * u;
        r--;
    }

    while (m > 0)
    {
        v = m * v;
        m--;
    }
    f = (t) / ((v)*u);
    printf("%d", f);

    return 0;
}