#include <stdio.h>

void exchange(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("after swapping: x = %d, y = %d\n", x, y);
}

int main() {
    int x,y;
    scanf("%d%d",&x,&y);

    printf("Before calling exchange function: x = %d, y = %d\n", x, y);
    exchange(x, y);
    

    return 0;
}
