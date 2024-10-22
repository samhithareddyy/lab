#include<stdio.h>
int main() {
   int a[3][3],b[3][2],c[3][2];
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           scanf("%d", &a[i][j]);
       }
   }
   int max=-99999,min=99999;
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           if(a[i][j]>max)
           max=a[i][j];
           if(a[i][j]<min)
           min=a[i][j];
           
       }}
       printf("max is %d, min is %d", max,min);
    return 0;
}
