#include<stdio.h>
int main(){
	int m,p,c,b,e;
	printf("enter maths marks");
	scanf("%d",&m);
		printf("enter phy marks");
	scanf("%d",&p);
		printf("enter chem marks");
	scanf("%d",&c);
		printf("enter bio marks");
	scanf("%d",&b);
		printf("enter eng marks");
	scanf("%d",&e);
	printf("total marks is %d", m+p+c+b+e);
	printf("percentage is %d", (m+p+c+b+e)/5);
	return 0;
}
