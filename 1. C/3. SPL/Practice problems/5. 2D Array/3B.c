#include <stdio.h>

int main() {
    int matrix[3][3];
    printf("Enter a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }

    int a = matrix[0][0], b = matrix[0][1], c = matrix[0][2];
    int d = matrix[1][0], e = matrix[1][1], f = matrix[1][2];
    int g = matrix[2][0], h = matrix[2][1], i = matrix[2][2];

    int determinant = a*(e*i - f*h) - b*(d*i - f*g) + c*(d*h - e*g);
    printf("Determinant: %d\n", determinant);

    return 0;
}
