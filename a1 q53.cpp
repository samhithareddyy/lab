#include<stdio.h>

int main() {
    int n, i, j;
    printf("Enter : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
    	for (j = i; j < n; j++){
    		printf(" ");
		}
        for (j = 1; j <=i; j++) {
            printf("*");
        }
        for (j = 1; j <i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (j = i; j <n; j++) {
            printf("*");
        }
        for (j = i; j <n-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

