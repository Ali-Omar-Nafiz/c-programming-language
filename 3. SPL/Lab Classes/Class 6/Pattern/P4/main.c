#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1; i--){
        //space
        for(int j=1; j<=n-i;j++){
        printf(" ");
        }//number
        for(int j=1; j<=i;j++){
        printf("%d",j);
        }

    printf("\n");
    }
    return 0;
}
