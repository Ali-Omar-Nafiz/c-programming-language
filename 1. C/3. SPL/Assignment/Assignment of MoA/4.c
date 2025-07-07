#include<stdio.h>
#include<math.h>
int is_prime(int x);
int reverse_number(int x);
int is_palindromic_prime(int x);
void find_superhero_palindromic_primes(int start, int end);
int main(){
  int lowerLimit,upperLimit;
  printf("Enter lower limit: ");
  scanf("%d",&lowerLimit);
  printf("Enter upper limit: ");
  scanf("%d",&upperLimit);
  find_superhero_palindromic_primes(lowerLimit,upperLimit);
}
void find_superhero_palindromic_primes(int start, int end){
  for(int i=start;i<=end;i++){
    if(is_palindromic_prime(i))printf("%d\n",i);
  }
}
int is_palindromic_prime(int x){
  if((reverse_number(x)==x)&&is_prime(x))return 1;
  else return 0;
}
int reverse_number(int x){
  int reverse=0;
  for(int i=x;i!=0;i/=10){
    reverse=reverse*10+(i%10);
  }
  return reverse;
}
int is_prime(int x){
  for(int i=2;i<=sqrt(x);i++){
    if(x%i==0)return 0;
  }
  return 1;
}