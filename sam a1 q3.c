#include<stdio.h>
int main(){
	int basicsalary,HRA,other;
	
	printf("enter basic salary");
	scanf("%d", &basicsalary);
	printf("enter HRA");
	scanf("%d", &HRA);
	printf("enter other");
	scanf("%d", &other);
	printf("gross salary is %d", basicsalary+HRA+other);
	return 0;
}
