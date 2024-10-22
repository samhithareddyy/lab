#include<stdio.h>
int oddeven(int x){
	if (x%2==0)
	printf("even");
	else
	printf("odd");
}
int main(){ int num;
	scanf("%d", &num);
	oddeven(num);
}
