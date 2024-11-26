#include<stdio.h>
struct student{
    int rollno;
    char name[100];
};


int main(){
	typedef struct student std;
    FILE *ptr;
    int n;
    ptr = fopen("LNMIITSTUDENT.txt","w");
    
    printf("enter no.of students");
    scanf("%d",&n);
    
    std s1[n];
    for(int i=0;i<n;i++){
    	printf("enter rollno and name of %d",i+1);
        scanf("%d %s",&s1[i].rollno,s1[i].name);
    }
    
    for(int i=0;i<n;i++){
        fprintf(ptr,"Details about student %d:\nname:%s\nroll number:%d\n",i+1,s1[i].name,s1[i].rollno);
    }
    fclose(ptr);
}
