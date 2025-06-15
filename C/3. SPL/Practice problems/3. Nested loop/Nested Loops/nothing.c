#include <stdio.h>
int main() {
    int arr[4] = {5, 10, 15, 20};
int sum = 0, product = 1;
for(int i = 0; i < 4; i++) {
sum += arr[i];
product *= arr[i];
arr[i] = sum - product;
}



    printf("%d  %d %d %d ",arr[0],arr[1],arr[2],arr[3]);


return 0;
}