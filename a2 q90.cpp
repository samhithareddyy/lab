#include<stdio.h>
int main(){
	int i,count=0;
	char str[100];
	scanf("%[^\n]s",str);
	
	char *ptr=str;
	
	//including spaces
	for(i=0;*(ptr+i)!='\0';i++){
	}
	printf("length of string including spaces is %d\n",i);
	
	//excluding spaces
	for(i=0;*(ptr+i)!='\0';i++){
		if(*(ptr+i)==' ')
			count++;	
	}
	printf("length of string excluding spaces is %d",i-count);
}
