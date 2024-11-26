#include<stdio.h>
#include<math.h>
int main(){
	int num,sqr,cube;
	scanf("%d",&num);
	
	int *ptr=&num;
	
	sqr=pow((*ptr),2);
	cube=pow((*ptr),3);	
	
	printf("square is %d and cube is %d",sqr,cube);
}
