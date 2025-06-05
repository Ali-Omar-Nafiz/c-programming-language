#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(i%2==0){
                printf("%d(even)",i);
            }else{
                printf("%d",i);
            }
        if (n!=i){
        printf(",");}
        }
    }
    return 0;
}
