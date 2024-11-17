#include <stdio.h>

int prime(int number) {
    if (number <= 1) return 0;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    scanf("%d",&num);
    if (prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
