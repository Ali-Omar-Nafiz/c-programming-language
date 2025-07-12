#include<stdio.h>
#define SIZE 1000
int main() {
  char mainString[SIZE], subString[SIZE];
  scanf("%s %s",mainString,subString);
  int flag;
  for (int i = 0; mainString[i] != '\0'; i++) {
    flag = 0;
    if (mainString[i] == subString[0]) {
      for (int j = 1; subString[j] != '\0'; j++) {
        if (mainString[i + j] != subString[j]) {
          i += j;
          flag = 1;
          break;
        }
      }
      if (flag == 0) {
        printf("Found");
        return 0;
      }
    }
  }
  printf("Not Found");
  return 0;
}