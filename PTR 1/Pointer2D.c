#include<stdio.h>
void cube(int r, int c,int *ptr[r][c])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\n",(*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]));	
		}
	}
}
	


void main()
{
	int r, c; 


	printf("Enter Row size :");
	scanf("%d",&r);
	
	printf("Enter Column size :");
	scanf("%d",&c);

	int arr[r][c],i,j;
	int *ptr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&arr[i][j]);
	    }
	    
	}
	printf("===============\n");
	printf("Cube of Array :\n");
	printf("===============\n");
    for(i=0;i<r;i++)
    {	
    	for(j=0;j<c;j++)
    	{
    		ptr[i][j]=&arr[i][j];
		}
	}
	
	cube(r,c,&ptr);
}



