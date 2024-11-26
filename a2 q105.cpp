#include<stdio.h>
#include<string.h>
void permute(char *p){
	
	
	char temp;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			temp= *(p+i);
			*(p+i)=*(p+j);
			*(p+j)=temp;
		
		printf("%s",*(p+i));
	}}
	
}
int main(){
char arr[100];
printf("enter string");
scanf("%s",arr);

char *p=arr;
permute(p);
	
}
