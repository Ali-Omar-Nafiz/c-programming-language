#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n; i++){
        //space
        for(int j=1; j<=n-i;j++){
        printf(" ");
        }//number 1
        for(int j=1; j<=i;j++){
        printf("%d",j);
        }//number 2
        for(int j=i-1; j>=1;j--){
        printf("%d",j);
        }

    printf("\n");
    }
    return 0;
}
