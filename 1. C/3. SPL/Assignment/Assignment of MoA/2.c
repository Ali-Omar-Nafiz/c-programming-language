#include<stdio.h>

#include<math.h>

int is_perfect_square(int x);
int are_digits_non_decreasing(int x, int prev_digit);
int check_are_digits_non_decreasing(int x);
void find_perfect_square_sorcerers(int start, int end);
int main() {
    int start, end;
    printf("Enter the range [start, end]: ");
    scanf("%d%d", & start, & end);
    find_perfect_square_sorcerers(start, end);
}
void find_perfect_square_sorcerers(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (is_perfect_square(i) && check_are_digits_non_decreasing(i)) printf("%d\n", i);
    }
}
int is_perfect_square(int x) {
    int checker = sqrt(x);
    if (checker * checker == x) return 1;
    else return 0;
}
int check_are_digits_non_decreasing(int x) {
    int prev_digit = x % 10;
    return are_digits_non_decreasing(x, prev_digit);
}
int are_digits_non_decreasing(int x, int prev_digit) {
    if (x == 0) return 1;
    if ((x % 10) > prev_digit) return 0;
    prev_digit = x % 10;
    x = x / 10;
    return are_digits_non_decreasing(x, prev_digit);
}