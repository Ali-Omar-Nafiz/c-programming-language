#include<stdio.h>
int main()
{
    char str1[1000],str2[1000],str3[1000];
    printf("Enter 1st string:");
    scanf("%[^\n]s",str1);
    printf("Enter 2nd string:");
    scanf(" %[^\n]s",str2);
    //printf("%s\n%s",str1,str2);
    int k=0;
    for(int i=0; str1[i]!='\0'; i++)
    {
        if(i==0 || str1[i]!='"' )
        {
            str3[k]=str1[i];
            k++;
        }
    }
    for(int j=0; str1[j]!='\0'; j++)
    {
        if(j!=0 || str2[j]!='"' )
        {
            str3[k]=str2[j];
            k++;
        }
    }
    printf("%s",str3);
    return 0;
}
