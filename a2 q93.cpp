#include<stdio.h>
int main(){
	int i,count=0;
	char str[100];
	scanf("%[^\n]s",str);
	
	char *ptr=str;
	
	for(i=0;*(ptr+i)!='\0';i++){
		if(*(ptr+i)==' '){
			count++;
		}
	}
	
	printf("no. of words is %d\n",count+1);
}
