#include <stdio.h>

int main() {
    int n, i, number, max, min;

    printf("Enter the number of numbrs ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &number);

    max = number;  
    min = number; 

    for (i = 1; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number > max) {
            max = number;  
        }
        if (number < min) {
            min = number; 
        }
    }

    printf("The maximum number is: %d\n", max);
    printf("The minimum number is: %d\n", min);

    return 0;
}
