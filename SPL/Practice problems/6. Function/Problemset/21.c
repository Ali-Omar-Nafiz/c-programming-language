#include<stdio.h>
#include<math.h>
void TakeInput();
float CalcMean(int* array,int num_of_elem);
void Calc_Std_deviation(int* array,int num_of_elem,float mean);
int main()
{
    TakeInput();
    return 0;
}
void TakeInput()
{
    int num_of_elem;
    printf("Enter the number of elements:");
    scanf("%d",&num_of_elem);
    int array[num_of_elem];
    printf("Enter the elements:");
    for(int i=0; i<num_of_elem; i++)
    {
        scanf("%d",&array[i]);
    }
    float mean= CalcMean(array, num_of_elem);
    Calc_Std_deviation(array,num_of_elem,mean);
}
float CalcMean(int* array,int num_of_elem)
{
    int sum=0;
    float mean;
    for(int i=0; i<num_of_elem; i++)
    {
        sum+=array[i];
    }
    mean=(float)sum/num_of_elem;
    return mean;
}
void Calc_Std_deviation(int* array,int num_of_elem,float mean)
{
    float sum=0,standard_deviation;
    for(int i=0; i<num_of_elem; i++)
    {
        sum+=pow((array[i]-mean),2);
    }
    standard_deviation=sqrt(sum/num_of_elem);
    printf("%.2f",standard_deviation);
}
