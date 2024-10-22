#include<stdio.h>
void palindrome(int n){
int	orgnumber=n;
	int remainder=0,reversednum=0;
	while(n!=0){   
	remainder=n%10;
	reversednum=reversednum*10+remainder;
	n/=10;}
	if(orgnumber==reversednum){
	printf("%d is a palindrome number", orgnumber);
}
else{printf("%d is not a palindrome number", orgnumber);
}
}
int main(){
	int n,orgnumber,x;
	printf("enter number");
	scanf("%d",&orgnumber);
	x=orgnumber;
palindrome(x);	
return 0;
}
