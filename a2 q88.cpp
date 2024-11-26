#include<stdio.h>
int main(){
	int a[5],a1[5];
	
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);
		
	int *ptr=a;
	
	for(int i=0;i<5;i++){
		a1[i]=*(ptr+i);
		printf("%d ",a1[i]);
	}
}
