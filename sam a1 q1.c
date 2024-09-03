#include<stdio.h>
int main(){
	float P,R,T,I;
	printf("enter principal amount");
	scanf("%f", &P);
	printf("enter rate of intrest");
	scanf("%f", &R);
	printf("enter time period");
	scanf("%f", &T);
	printf("intrest amount is %f",P*R*T/100);
	return 0;
}
