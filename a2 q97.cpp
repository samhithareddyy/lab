#include<stdio.h>
int main(){
	int count=0;
	char str[100];
	scanf("%[^\n]s",str);
	
	char *ptr=str;
	
	for(int i=0;str[i]!='\0';i++)
		if(*(ptr+i)=='a'||*(ptr+i)=='e'||*(ptr+i)=='i'||*(ptr+i)=='o'||*(ptr+i)=='u')
			count++;
			
	printf("number of vowels is %d",count);
	
}
