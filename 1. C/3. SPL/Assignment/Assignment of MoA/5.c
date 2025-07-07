#include<stdio.h>
struct demons{
  char name[20];
  int power;
};
int onlyAlphabets(char *input);
int Multiple_of_5(int x);
int main(){
  int totalDemon;
  scanf("%d",&totalDemon);
  struct demons list[totalDemon];
  int count=0;
  for(int i=0;i<totalDemon;i++){
    scanf("%s",list[i].name);
    scanf("%d",&list[i].power);
    if(onlyAlphabets(list[i].name)&&Multiple_of_5(list[i].power))count++;
  }
  printf("%d\n",count);
}
int onlyAlphabets(char *input){
  for(int i=0;input[i]!='\0';i++){
    if(!((input[i]>='A'&&input[i]<='Z')||(input[i]>='a'&&input[i]<='z')))return 0;
  }
  return 1;
}
int Multiple_of_5(int x){
  if(x%5==0)return 1;
  else return 0;
}