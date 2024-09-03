#include<stdio.h>
int main(){
	float M,P,C,E,CM;
	printf("\n enter marks of maths,phys,chem,entrance exam");
	scanf("%f",&M);
	scanf("%f",&P);
	scanf("%f",&C);
	scanf("%f",&E);
	printf("CM is %f", (M/2)+(C/2)+(P/2)+E);
	return 0;
}
