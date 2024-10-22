#include <stdio.h>
int main() {
    int matrix[3][3];
    printf("Enter the elements of the 3x3 matrix:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
for(int i=0;i<3;i++){
	int sumrow_i=0;
	for(int j=0;j<3;j++){
		sumrow_i+=matrix[i][j];
		
	}
	printf("sum of row %d=%d", i,sumrow_i);
}

    return 0;
}
