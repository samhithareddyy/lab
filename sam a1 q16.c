#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter a");
	scanf("%d", &a);
	printf("enter b");
	scanf("%d", &b);
	printf("enter c");
	scanf("%d", &c);
	if (a>b)
	{if(a>c)
	{printf("a is greater");
	}
	}
	if(b>c)
	{printf("b is greater");
	}
	else{printf("c is greater");
	}
	return 0;
}
