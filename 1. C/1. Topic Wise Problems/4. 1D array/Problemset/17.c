#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the 'N': ");
    scanf("%d", &n);

    int array[n], min, minIndex;
    for (int i = 0; i < n; i++) {
        printf("Enter array[%d] = ", i);
        scanf("%d", &array[i]);
    }

    
    for (int k = 0; k < n; k++) {
        min = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (array[i] < min) {
                min = array[i];
                minIndex = i;
            }
        }

        printf("%d ", min);
        array[minIndex] = INT_MAX;
    }

    printf("\n");
    return 0;
}
