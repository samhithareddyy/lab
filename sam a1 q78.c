#include<stdio.h>
#include<math.h>
int armstrong(int num){
	int orgnum,rem,result=0,n=0;
	orgnum=num;
	while(orgnum!=0)
		{
			orgnum/=10;
			n++;
		}
	orgnum=num;
	while(orgnum!=0)
		{
			rem=orgnum%10;
			result+=pow(rem,n);
			orgnum/=10;
		}
	return(result==num);
}
int main(){
	int num;
	printf("enter number");
	scanf("%d",&num);
	if(armstrong(num))
		printf("%d is an armstrong num\n", num);
	else
		printf("%d is not an armstrong num\n", num);
	}
