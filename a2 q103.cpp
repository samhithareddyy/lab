#include<stdio.h>
#define big(a,b) if(a>b)\
printf("%d is max",a);\
else \
printf("%d is max",b);

int main(){
	int x,y;
	printf("enter x");
	scanf("%d",&x);
	
	printf("enter y");
	scanf("%d",&y);
	
	big(x,y);
}
