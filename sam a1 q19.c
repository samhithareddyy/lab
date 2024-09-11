#include<stdio.h>
int main(){
	char a;
	printf("enter character");
	scanf("%c", &a);
	a>=97 && a<=122 ? printf("character is small case letter"):printf("character is not small case letter");
	return 0;
}
