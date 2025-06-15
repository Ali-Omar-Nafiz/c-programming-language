#include <stdio.h>
#include <ctype.h>

/*
Venus Number:
# Sum of the Digits is divisible by 5
# Sum of the Even positioned Digits is divisible by 3
# Sum of the Last and First Digit < 11

*/

int main()
{
    int num, sum = 0, evensum = 0;
    scanf("%d", &num);
    int digitCount = 0, fDigit, lDigit;
    int n = num;
    while (n != 0)
    {
        int digit = n % 10;
        sum+=digit;
        if (n == num)
            lDigit = digit;
        digitCount++;
        n = n / 10;
        if (n == 0)
            fDigit = digit;
    }
    int position=digitCount;
    n=num;
    while (n != 0)
    {
        int digit = n % 10;
        if(position %2==0){
            evensum+=digit;
        }
        n=n/10;
        position--;
    }
   if(sum%5==0 && evensum%3==0 && (fDigit+lDigit)<11) {
    printf("Venus");
   }else{
   printf("Not Venus");}
}
