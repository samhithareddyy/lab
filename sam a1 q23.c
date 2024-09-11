#include <stdio.h>

int main(){

int base, power;
int value=1;
printf("enter base\n");
scanf("%d", &base);
printf("enter power\n");
scanf("%d", &power);
for(int i=1;i<=power;i++){
value=value*base;
}
printf("%d^%d=%d\n", base, power, value);
return 0;
}
