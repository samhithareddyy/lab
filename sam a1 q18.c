#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter a");
	scanf("%d", &a);
	printf("enter b");
	scanf("%d", &b);
	printf("enter c");
	scanf("%d", &c);
	a>b ?(a>c ? printf("a is greatest"):printf("c is greatest")): b>c ? printf("b is greatest"):printf("c is greatest");
	return 0;
	}
