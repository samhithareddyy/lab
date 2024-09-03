#include<stdio.h>
int main(){
	int sec,a,b;
	printf("enter seconds");
	scanf("%d",&sec);
	printf("hour is %d",sec/3600);
	a=sec%3600;
	printf("min is %d", a/60);
	b=a%60;
		printf("sec is %d", b);
		return 0;
}
