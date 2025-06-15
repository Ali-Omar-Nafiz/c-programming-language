#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    scanf("%d",&n);
    
    for(i=n;i>0;i=i/10)
    {
       if((i%10)==9)
       {

        count9++;
       }
       else if((i%10)==8)
       {
        count8++;
       }
       else if((i%10)==7)
       {
        count7++;
       }
       else if((i%10)==6)
       {
        count6++;
       }
       else if((i%10)==5)
       {
        count5++;
       }
       else if((i%10)==4)
       {
        count4++;
       }
       else if((i%10)==3)
       {
        count3++;
       }
       else if((i%10)==2)
       {
        count2++;
       }
       else if((i%10)==1)
       {
        count1++;
       }
       else if((i%10)==10)
       {
        count0++;
       }

    }
    printf("Frequency of 0=%d\n",count0);
    printf("Frequency of 1=%d\n",count1);
    printf("Frequency of 2=%d\n",count2);
    printf("Frequency of 3=%d\n",count3);
    printf("Frequency of 4=%d\n",count4);
    printf("Frequency of 5=%d\n",count5);
    printf("Frequency of 6=%d\n",count6);
    printf("Frequency of 7=%d\n",count7);
    printf("Frequency of 8=%d\n",count8);
    printf("Frequency of 9=%d\n",count9);
    
  
    return 0;
}