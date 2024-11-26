#include<stdio.h>
int main(){
	FILE *ptr;
	ptr=fopen("LNMIITSTUDENT.DAT","a");
	char ch[100]="b.tech 1st year\n DoAI";
	fprintf(ptr,"%s",ch);
	fclose(ptr);
}
