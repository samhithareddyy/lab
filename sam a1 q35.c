#include <stdio.h>

int main() {

int a,b;
int sum=0;
printf("Enter an integer: "); scanf("%d", &a);

while (a!= 0) { b= a % 10; sum += b; a/= 10; }

printf("Sum of the digits: %d\n", sum);

return 0;

}
