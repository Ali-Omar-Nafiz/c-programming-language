#include<stdio.h>
int main()
    {
        int count=1,n;
        printf("Nth term=\n");
        scanf("%d",&n);
        while(count<(n*2))
        {
            printf("%d",count);
            count+=2;
        }

        return 0;
    }
