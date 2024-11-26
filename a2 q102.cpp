#include<stdio.h>
#include<ctype.h>
int main(){
	int count=0;
	FILE *ptr;
	
	ptr=fopen("no.of words.c","r");
	
	
	char ch;
	//no. of characters
	while((ch=fgetc(ptr))!=EOF){
		if(isprint(ch))
		count++;
		}

		
	printf("no. of characters is %d\n",count);
	
	//no. of words
	rewind(ptr);
	int a=0;
	while((ch=fgetc(ptr))!=EOF){
		
			if(ch==' ')
				++a;
			if(ch=='\n')
				++a;
		}
	
	printf("no. of words is %d\n",a);
	
	
	//no.of lines
	int b=0;
	rewind(ptr);
	while((ch=fgetc(ptr))!=EOF){
	
		if(ch=='\n')
		b++;
	}
	printf("no. of lines is %d\n",b);
}
