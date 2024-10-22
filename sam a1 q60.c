#include<stdio.h>
//Program to sort (selection sort) an array.
int main() {

    int i, j, temp=0, num[5];
    printf("Enter 5 numbers : \n");

    for(i=0; i<5; i++) {
        scanf("%d", &num[i]);
    }
  
    for(i=0; i<5; i++) {
        for(j=4; j>i; j--) {
            if(num[i] > num[j]) {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }

    printf("Selection sort.....\n");
    for(i=0; i<5; i++) {
        printf("%d\t",num[i]);
    }

    return 0;
}
