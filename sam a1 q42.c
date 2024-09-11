#include <stdio.h>

int main() {

int n, i;

printf("Enter a positive integer: ");
scanf("%d", &n);
if (n < 2) { printf("%d is neither a prime number nor a composite number\n", n);
}
for (i=2; i<=n/2; i++) { if (n%i!=0) { printf("prime number"); 
}
 else { printf("%d is composite number\n", n);
}
}
return 0;}
