#include<stdio.h>
void take_input();
void sorter(char str[1000]);
int main()
{
    take_input();


    return 0;
}
void take_input()
{
    char str[1000];
    printf("Enter the String:");
    scanf("%[^\n]s",str);
    sorter(str);
}
void sorter(char str[1000])
{
    int min,index;
    for(int i=1; str[i]!='"'; i++)
    {
        min=str[i];
        index=i;
        for(int j=i+1; str[j]!='"'; j++)
        {
            if(str[j]<min)
            {
                min=str[j];
                index=j;
            }
        }
        str[index]=str[i];
        str[i]=min;
    }
    printf("%s",str);
}
