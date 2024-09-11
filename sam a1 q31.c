#include <stdio.h>

int main() {
    int sum = 0, digit,a;

    printf("Enter an N-digit number: ");
    scanf("%d", &a);

    while (a> 0) {
        digit = a% 10;
        sum += digit;
        a/= 10;
    }
    printf("The sum of the individual digits is: %d\n", sum);
    return 0;
}
