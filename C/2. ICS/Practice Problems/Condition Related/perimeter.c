#include<stdio.h>
int main()
{ float leng,weid;
    char input;
    scanf("%c",&input);
    if(input=='A')
    {
        scanf("%f%f",&leng,&weid);
        printf("The area of a rectengular is: %f",leng*weid);
    }
    else if(input=='P')
    {
        scanf("%f%f",&leng,&weid);
        printf("The perimeter of a rectengular is: %f",2*(leng+weid));
    }
else{printf("Invalid");}


    return 0;
}