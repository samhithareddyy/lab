#include<stdio.h>
int main(){
int m,p,c,b,e;
float a;
	printf("enter maths marks");
	scanf("%d",&m);
	printf("enter phy marks");
	scanf("%d",&p);
	printf("enter bio marks");
	scanf("%d",&b);
	printf("enter chem marks");
	scanf("%d",&c);
	printf("enter english marks");
	scanf("%d",&e);
	a=(m+p+c+b+e)/5;
	printf("percentage is %f", a);
	if(a>=90){
		printf("A grade");
	}
	else if(a>=75&&a<90){
		printf("B grade");
	}
	else if(a>=50&&a<75){
		printf("C grade");
	}
	else if(a>=35&&a<50){
		printf("D grade");
	}
	else if(a<35){
		printf("the student has failed");
	}
	return 0;
}
