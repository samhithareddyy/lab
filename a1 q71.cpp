#include<stdio.h>
int main(){
	int a[10]={5,9,17,23,25,45,59,63,71,89};
	int n=sizeof(a)/sizeof(a[0]);
	
	int l=0,r=n-1;
	int d;
	scanf("%d",&d);
	
	for(int i=0;;i++){
		int m=a[(l+r)/2];
		
		if(m==d){
		printf("found at %d",(l+r)/2+1);
		break;}
		
		else if(m<d)
			l=(l+r)/2+1;
			
		else
			r=(l+r)/2-1;
	}
}
