#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("First %d Fibonacci numbers: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c= a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
	int n;
	scanf("%d",&n);
    fibonacci(5);
    
    return 0;
}
