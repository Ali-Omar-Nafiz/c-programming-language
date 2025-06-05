#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n; i++){
        for(int j=1; j<=i;j++){
                //printf("%d",j);
                printf("%d",i);
       // printf("%d",j%2);
//       printf("%c",j+64);
//        printf("%c",j+76);
        }printf("\n");
    }
    return 0;
}
