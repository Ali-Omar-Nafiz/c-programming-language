#include <stdio.h>
#include <stdlib.h>
//p1,p2
int main()
{
    int n;
    scanf("%d",&n);
    //p1 code
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    //printf("\n");printf("\n");
    //p2code
    for(int i=n-1; i>=1;i--){
        for(int j=1; j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
