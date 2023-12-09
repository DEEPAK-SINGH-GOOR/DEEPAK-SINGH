#include<stdio.h>
main()
{
	int r,c;
	printf("Enter Row size :");
	scanf("%d",&r);
	
	printf("Enter Column size :");
	scanf("%d",&c);

	int a[r][c],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	    }
	}
	printf("\n");
	
	printf("|| NONE TRANSPOSE MATRIX ||\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	
	}
	printf("\n");
	printf("|| THE TRANSPOSE MATRIX ||\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	
	}
	
}
