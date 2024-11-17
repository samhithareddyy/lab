#include <stdio.h>

int palindrome(int n) {
    int original = n;
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return original == rev;
}

int main() {
    int n;
    scanf("%d",&n);

    if (palindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }

    return 0;
}
