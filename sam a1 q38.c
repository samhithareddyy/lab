#include<stdio.h>
int main(){
	int n;
	printf("enter number");
	scanf("%d", &n);
	for(int i=1; i*i<=n; i++){
	printf("%d\n", i*i);
	}

}
