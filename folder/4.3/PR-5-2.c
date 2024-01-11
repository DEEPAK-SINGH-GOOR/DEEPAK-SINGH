#include<stdio.h>
main()
{
	int r,c;
	printf("Enter Row Size :");
	scanf("%d",&r);
	printf("Enter column Size :");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum,h=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}	
	}
	
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			if(h<a[i][j])
			{
				h=a[i][j];
			}
		}
		printf("\n");	
		
	}
	printf("\nBIG VALUE IN ARRAY IS :%d",h);
}

