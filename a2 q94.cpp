#include<stdio.h>
int main(){
	char str[]="SVNITJAVA";
	int n=sizeof(str)/sizeof(str[0]);
	
	char str1[n+1];
		
	char *ptr=str;
	
	int j=0;
	for(int i=n-2;i>=0;i--){
		str1[j]=*(ptr+i);
		j++;
		
	}
	str1[j]='\0';
	printf("%s",str1);
}
