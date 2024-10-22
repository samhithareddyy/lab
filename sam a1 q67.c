#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],sum[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{printf("a[%d][%d]", i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{printf("b[%d][%d]", i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		
		}
		printf("\n");
	}
	printf("sum of matrices is: \n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	
	printf("%d ", sum[i][j]);}
	printf("\n");}
}
