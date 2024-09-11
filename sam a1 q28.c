#include<stdio.h>
#include<math.h>
int main(){
	int n,a,b,c,d;
	printf("enter 3 digit number");
	scanf("%d", &n);
	a=n%100;
	b=a%10;
	c=(a-b)/10;
	d=(n-a)/100;
if(n==pow(d,3)+pow(c,3)+pow(b,3))
{printf("armstrong number");
}
else{printf("not an armstrong number");
}
return 0;}
