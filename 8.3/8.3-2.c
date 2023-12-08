#include<stdio.h>
main()
{
	int r,c;
	printf("Enter Row Size :");
	scanf("%d",&r);
	printf("Enter column Size :");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],cc[r][c];
    int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
				
		}	
	} 
	printf("\n");
	printf("=========================\n");
    printf("Enter Array 'B' Elements\n");
    printf("=========================\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
            				
		}	
	}
	printf("=========================\n");
	printf("!! OUTPUT !!\n");
	printf("=========================\n");
	printf("\n");
	printf("=========================\n");
	printf("!! ARRAY C IS !!\n");
	printf("=========================\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			
			cc[r][c]=a[i][j]+b[i][j];
     	    printf("%d ",cc[r][c]);					
		}
		printf("\n");	
		
	}
}
