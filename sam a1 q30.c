#include<stdio.h>
int main(){
	int n, reversednum=0, remainder, orgnum;
	printf("enter number");
	scanf("%d", &orgnum);
	n=orgnum;
	while(n!=0){
		remainder=n%10;
		reversednum=reversednum*10+remainder;
		n=n/10;
	}
	printf("the reverse of %d is %d", orgnum ,reversednum);
	return 0;
}
