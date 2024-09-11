#include <stdio.h>

int main() {float a=1; 
	float result=0;
	for(int i=1;i<=4;i++){
	
	a*=i;
	   result+=i/a;
	}
	
printf("result is %f", result);
    return 0;
}
