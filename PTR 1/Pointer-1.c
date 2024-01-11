#include<stdio.h>
main()
{

	int *ptr;
	int r,c;
	printf("Enter Row size :");
	scanf("%d",&r);
	
	printf("Enter Column size :");
	scanf("%d",&c);

	int arr[r][c],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&arr[i][j]);
	    }
	}
    for(i=0;i<r;i++)
    {	
    	for(j=0;j<c;j++)
    	{
    	ptr=&arr[i][j];
    	printf("\n Addres of Array[%d][%d]\tValue=%d\tAddres =%u",i,j,arr[i][j],ptr);	
		}
	}
}

