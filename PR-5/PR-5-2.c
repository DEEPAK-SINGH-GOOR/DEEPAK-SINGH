#include<stdio.h>
main()
{
	int r,c;
	printf("Enter Row size :");
	scanf("%d",&r);
	
	printf("Enter Column size :");
	scanf("%d",&c);

	int a[r][c],i,j,add=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	    }
	}
	printf("\n");
    printf("===================================\n");
    
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(add<a[i][j])
			{
			   //
			   add=a[i][j]; 
			   //  
			}
	    }
	}
	printf("Bigest Value in This Array :%d",add);
}

