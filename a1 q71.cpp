#include<stdio.h>
int main(){
	int a[4],n;
	
	for(int i=0;i<4;i++)
		scanf("%d",&a[i]);
	
	printf("enter no.of positions");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<4-1;j++){
			int temp=a[0];
			a[0]=a[4-j-1];
			a[4-j-1]=temp;
		}
	}
	
	
	int l=0,r=4-1;
	
	for(int i=0;;i++){
	int m=a[(l+r)/2];
	if(m<a[(l+r)/2-1])
	{
		printf(" pivot element found at %d",(l+r)/2+1);
		break;
	}
	
	else if(m<a[r])
		r=(l+r)/2-1;
		
	else if(m>a[r])
		l=(l+r)/2+1;
	
	}}
