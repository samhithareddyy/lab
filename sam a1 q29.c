#include<stdio.h>
int main(){
	int n,orgnumber, reversednum=0, remainder;
	printf("enter number");
	scanf("%d",&orgnumber);
	n=orgnumber;
while(n!=0){
	remainder=n%10;
	reversednum=reversednum*10+remainder;
	n/=10;
}
if(orgnumber==reversednum){
	printf("%d is a palindrome number", orgnumber);
}
else{printf("%d is not a palindrome number", orgnumber);
}
return 0;
}
