#include<stdio.h>
int main()
    {
        int count=1,n;
        printf("Nth term=\n");
        scanf("%d",&n);
        while(count<=n)
        {
            printf("%d",count);
            count++;
        }

        return 0;
    }
