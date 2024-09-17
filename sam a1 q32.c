#include <stdio.h>

int main() {
    int n, i, max1, max2, number;

    printf("Enter the number of numbers ");
    scanf("%d", &n);

    printf("Enter 1st number ");
    scanf("%d", &number);
    max1 = number;  

    for (i = 1; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);

        if (number > max1) 
            max2 = max1; 
            max1 = number;  
        } else if (number != max1) {
            max2 = number;  
        }
    }
        printf("The maximum number is: %d\n", max1);
        printf("The second maximum number is: %d\n", max2);
    return 0;
}
