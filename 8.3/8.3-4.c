#include<stdio.h>
main()
{
  int r,c;
    printf("Enter Row Size :");
    scanf("%d",&r);
    printf("Enter Coloumn Size :");
    scanf("%d",&c);
    
    int a[r][c],b[r][c],sum[r][c],i,j,add=0; 
 
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++) 
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
		}
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	{
    		if(i==0||j==0||i==r-1||j==c-1)
    		{
    			
    			printf("%d ",a[i][j]);	
    				add+=a[i][j];
			}
			else
			{
				printf("  ");
			}
			
		}  
		printf("\n");
	}
	printf("\n%d",add);
}

