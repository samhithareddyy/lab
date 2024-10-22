#include<stdio.h>
int main() {

    int score[5][5], i, j, k=0, max=0;
    printf("Enter your 3 subject marks  : \n");
int totalmarks[i][2];
//read the data...
    for(i=0; i<5; i++) {
        
        totalmarks[i][2]=0;
        for(j=0; j<3; j++) {
            scanf("%d", &score[i][j]);
            totalmarks[i][2]+=score[i][j];
        }
    }

//total marks...
    printf("Total marks of each students......\n");
    for(i=0; i<5; i++) {
        printf("%d. %d\n", i+1, totalmarks[i][2]);
    }

//Highest marks...
    for(j=1; j<3; j++) {
        max=0;
        for(i=0; i<5; i++) {
            if(max<score[i][j]) {
                max=score[i][j];
                k=i;
            }
        }
        printf("Highest marks in subject%d : %d.%d\n", j, k+1, max);
    }

//highest total marks...
    max=0;
    for(i=0; i<5; i++) {
        if(max<totalmarks[i][2]) {
            max=totalmarks[i][4];
            k=i;
        }
    }
    printf("\nHighest total marks is : %d.%d", k+1, max);

    return 0;
}
