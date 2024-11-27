#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    (n == 7) ? printf("Yep! It's a lucky number.\n") : printf("Better luck for next time...\n");

    return 0;
}
