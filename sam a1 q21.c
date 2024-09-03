#include<stdio.h>
int main(){
	
 int a,b;

 char op;

 printf("enter the function");

 scanf("%c",&op);
 
 printf("enter value of a");

 scanf("%d",&a);

 printf("enter the value of b");

 scanf("%d",&b);

 switch(op) {

 case'+': printf("the value is %d", a+b);

 break;

case'-': printf("the value is %d", a-b);

 break;
 
 case'*': printf("the value is %d", a*b);

 break;
 
 case'/': printf("the value is %d", a/b);

 break;
 
 default: printf("invalid operation");

	return 0;
}
}
