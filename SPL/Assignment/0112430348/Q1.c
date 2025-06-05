#include <stdio.h>
#include <limits.h>
struct A
{
    int a, b, e, f;
    double c, d;
};
void city_wise_data(double arr[5][7]);
struct A high_low_temp(double arr[][7], int a, int b);
void day_wise_data(double arr[5][7]);
int main()
{
    double input[5][7];
    int a = 5, b = 7;


    for (int i = 0; i < 5; i++)
    {
        printf("Data of City %d:\n", i + 1);
        for (int j = 0; j < 7; j++)
        {
            printf("Enter the temp of Day %d: ", j + 1);
again:
            scanf("%lf", &input[i][j]);
            if(input[i][j]<5 || input[i][j]>60)
            {
                printf("\"Invalid temperature  entered!!\"\nEnter again:");
                goto again;
            }
        }
    }
    city_wise_data(input);
    struct A res = high_low_temp(input, a, b);
    printf("Highest Temperature: %.1lf°C in City %d on Day %d\n", res.c, res.a, res.e);
    printf("Lowest Temperature: %.1lf°C in City %d on Day %d\n", res.d, res.b, res.f);
    day_wise_data(input);
    return 0;
}
void city_wise_data(double arr[5][7])
{
    double total, avg;
    int heat, cold;
    for (int i = 0; i < 5; i++)
    {
        total = 0;
        heat = cold = 0;
        for (int j = 0; j < 7; j++)
        {
            total += arr[i][j];
            if (arr[i][j] > 40) heat++;
            if (arr[i][j] < 10) cold++;
        }
        avg = total / 7;
        printf("City %d\n", i + 1);
        printf("Average Temp: %.1f°C\n", avg);
        if (avg >= 30)
            printf("Weather: Hot\n");
        else if (avg >= 20)
            printf("Weather: Moderate\n");
        else
            printf("Weather: Cold\n");
        printf("Heat Alert Days: %d\n", heat);
        printf("Cold Alert Days: %d\n", cold);
    }
}
struct A high_low_temp(double arr[5][7], int a, int b)
{
    struct A r;
    double min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                r.c = max;
                r.a = i + 1;
                r.e = j + 1;
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
                r.d = min;
                r.b = i + 1;
                r.f = j + 1;
            }
        }
    }
    return r;
}
void day_wise_data(double arr[5][7])
{
    double avg_arr[1][7], total, avg;
    double min = INT_MAX, max = INT_MIN;
    int hottest, coldest, a, b;
    printf("Average temp per day:\n");
    for (int i = 0; i < 7; i++)
    {
        total = 0;
        for (int j = 0; j < 5; j++)
        {
            total += arr[j][i];
        }
        avg = total / 5;
        printf("Day %d: %.1lf\n", i + 1, avg);
        avg_arr[0][i] = avg;
    }
    a = 1, b = 7;
    struct A res = high_low_temp(avg_arr, a, b);
    printf("Hottest Day: Day %d (%.1lf C)\n", res.e, res.c);
    printf("Coldest Day: Day %d (%.1lf C)\n", res.f, res.d);
}
//Sorry for the poor readability and optimization
