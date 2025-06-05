#include<stdio.h>
int main()
{
    FILE *fptr1=fopen("sample1.txt","r");
    FILE *fptr2=fopen("sample3.txt","w");
    if(fptr1==NULL || fptr2==NULL)return 6;
    char c;
    while((c=fgetc(fptr1))!=EOF)
    {
        fputc(c,fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
