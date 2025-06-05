#include <stdio.h>
#include <stdlib.h>

int main()
{
   int mat[][3]={1,2,3,4,5,6,7,8,9};

   for(int row=0; row<3; row++){
    for(int col=0; col<3; col++){
        printf("%d ",mat[row][col]);
    }
    printf("\n");
   }



   printf("Enter elements:");
   int mat2[3][4];
   for(int row=0; row<3; row++){
    for(int col=0; col<4; col++){
        scanf("%d ",&mat2[row][col]);
    }

   }
   for(int row=0; row<3; row++){
    for(int col=0; col<4; col++){
        printf("%d ",mat2[row][col]);
    }
    printf("\n");
   }
    return 0;
}
