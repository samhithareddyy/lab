#include<stdio.h>

int main() {

    int n, i, num[10];
    printf("Enter 10 elements of an array : ");

    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }

    printf("Enter a number which one you want: \n");
    scanf("%d", &n);

    for(i=0; i<10; i++) {
        if(n==num[i]) {   
            printf("%d is found in data \n :)",n);
            break;
        }
        else 
            {
                printf("%d is not found in data \n :(",n); 
                break;              
            }
    }
    return 0;
}
