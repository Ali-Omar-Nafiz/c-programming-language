#include<stdio.h>
int main()
{
    int count=0;
    local:
    count++;
    printf("Fuck you;\n");
    printf("Fuck Abir;\n");
    printf("Fuck you;\n");
    printf("Fuck Abir okay boi and %d;\n",count);
    if(count<10){goto local;}
    goto global;
    global:
    printf("Fuck me;\n");
    pola:
    printf("Fuck Abir;\n");
    printf("Fuck me;\n");
    printf("Fuck me okay boi and %d;\n",count);
    if(count>0){count--;goto pola;}


    return 0;

}