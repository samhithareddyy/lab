#include<stdio.h>
int main(){
	int a=5,b=6,c;
	c=a;
	a=b;
	b=c;
	printf("the value of a is %d", a);
	printf("the value of b is %d", b);
	return 0;
}
