#include <stdio.h>

int function2(int x){
    return 5*x;
}

void function1(int i){
    printf("Function 1 is called.\n");
   int var= function2(i);
    printf("function 1 is called again. The value is %d\n", var);
}

int primeCheck(int x){
    //int isPrime = 1;
    if(x==1) return 0;
    for(int i =2;i<=x/2;i++){   //i = 1, 11, 11/2 = 2,3,4,5
        if(x%i == 0){
            return 0;
            // isPrime = 0;
            // printf("%d is not prime.\n",x);
            // break;
        }
    }
    return 1;

//    if (isPrime == 1){
//      printf("%d is  prime.\n",x);
//    }

}

int check_palindrome(int a){  //123

    int temp = a; // temp = 123
    int rev = 0;

    while(temp!=0){  //temp = 0
        rev = rev*10+(temp%10);  //32*10 + 1 = 321
        temp /=10;
    }
    if(a==rev) return 1;
    else  return 0;
}

int both_prime_Palindrome(int i){
    int checkPr = primeCheck(i);
    int checkPl = check_palindrome(i);
    if(checkPl == 1 && checkPr==1)return 1;
    else return 0;
}


int main(){
    int low, high;
    printf("ENter range: ");
    scanf("%d %d",&low, &high);
    for(int i =low;i<=high;i++){  //1....10
       int check =  both_prime_Palindrome(i);
        if (check == 1)printf("%d ", i);
         //else printf("%d is not prime.\n", i);
    }

}
