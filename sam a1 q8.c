#include<stdio.h>
int main(){
float mins,hours,days,seconds;
seconds=31558150;
hours=seconds/3600;
mins=seconds/60;
days=seconds/86400;
printf("no.of hours is %f", hours);
printf("no.of mins is %f",mins);
printf("no.of days is %f",days);
return 0;
}
