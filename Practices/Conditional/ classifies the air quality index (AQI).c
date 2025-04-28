#include<stdio.h>
int main()
{
    int aqi;
    scanf("%d",&aqi);
    if(aqi>=0&&aqi<=50)
    {
        printf("Good");
    }
    else  if(aqi>=51&&aqi<=100)
    {
        printf("Moderate");
    }
    else  if(aqi>=101&&aqi<=150)
    {
        printf("Unhealthy for Sensitive Groups");
    }

    else  if(aqi>=151&&aqi<=200)
    {
        printf("Unhealthy");
    }
    else  if(aqi>=201&&aqi<=300)
    {
        printf("Very Unhealthy");
    }
    else if(aqi>300)
    {
        printf("Hazardous");
    }
    else
    {
        printf("Invalid input");
    }



    return 0;
}
