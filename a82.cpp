#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n,r;
    printf("enter n");
    scanf("%d",&n);
    printf("enter r");
    scanf("%d",&r);
    printf("nCr(%d, %d) = %d\n", n, r, nCr(n, r));
    return 0;
}
