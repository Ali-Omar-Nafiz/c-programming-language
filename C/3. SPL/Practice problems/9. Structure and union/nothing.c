#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data data;

    data.i = 10;
    printf("After setting data.i = 10:\n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.c = %c\n", data.c);

    data.f = 3.14;
    printf("\nAfter setting data.f = 3.14:\n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.c = %c\n", data.c);

    data.c = 'A';
    printf("\nAfter setting data.c = 'A':\n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.c = %c\n", data.c);

    return 0;
}

