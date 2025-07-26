#include <stdio.h>
#include<string.h>
void removeAllDuplicates(char str[]);
int getSize(char str[]);
void checkPalindrome(char *str);
int main() {
    char str[1000];
    scanf("%s",str);
    removeAllDuplicates(str);
    checkPalindrome(str);

    return 0;
}
void removeAllDuplicates(char str[]){
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                for(int k=j;str[k]!='\0';k++){
                    str[k]=str[k+1];
                }
            }
        }
    }
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                str[j]='\0';
            }
        }
    }
    printf("%s\n",str);
}
void checkPalindrome(char *str){
  char checker[1000];
  int size=getSize(str);
  for(int i=0,j=(size-1);str[i]!='\0';i++,j--){
    checker[j]=str[i];
  }
  checker[size]='\0';
  if(!strcmp(checker,str))printf("Palindrome");
  else printf("Not Palindrome");

}
int getSize(char str[]){
  int count=0;
  for(int i=0;str[i]!='\0';i++){
    count++;
  }
  return  count;
}
