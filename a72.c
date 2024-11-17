#include<stdio.h>
//72. to rotate array by N postions
int main(){
	int i,a[5],N,j,temp;
	
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	printf("enter no.of positions");
	scanf("%d",&N);
	
	
	for(i=0;i<N;i++){
		for(j=0;j<4;j++){
			if(j==0){
				temp=a[j];
				a[j]=a[4-j];
				a[4-j]=temp;
			}
			else{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	
	for(i=0;i<5;i++)
	 printf("%d ",a[i]);
}
