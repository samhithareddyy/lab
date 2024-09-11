#include <stdio.h>

int main(){
    int n;
	printf("enter number");
	scanf("%d",&n);
	int o=0;
	for(int i=1;i<=n;i+=2){
	o=o+i;}
	printf("sum of odd numbers is %d\n",o);
	int e=0;
	for(int i=0;i<=n;i+=2){
	
	e=e+i;
}	printf("sum of even numbers is %d\n",e);
}
