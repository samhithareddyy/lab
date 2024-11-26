#include<stdio.h>
int main(){
	int count=0;
	FILE *ptr;
	ptr=fopen("vowels.c","r");
	
	for(int i=1;i<=50;i++){
 	char ch=fgetc(ptr);
 	
 	switch(ch){
	 
 	case 'a':
	 count++;
	 break;
	case 'e':
	 count++;
	 break;
	case 'i':
	 count++;
	 break;
	case 'o':
	 count++;
	 break;
	case 'u':
	 count++;
	 break;}}

	printf("number of vowels are: %d",count);
	
	fclose(ptr);
}
