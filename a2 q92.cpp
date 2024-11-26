#include<stdio.h>
int main(){
	int n;
	
	printf("no. of numbers is ");
	scanf("%d",&n);
	
	int a[n];
	
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	int *ptr=a;
	
	int max=-9999;
	
	for(int i=0;i<n;i++){
		if(*(ptr+i)>max)
		max=a[i];
	}
	
	printf("max is %d",max);
}
