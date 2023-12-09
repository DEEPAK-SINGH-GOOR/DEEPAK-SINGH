#include<stdio.h>
main()
{
	int r,c;
	printf("Enter Row size :");
	scanf("%d",&r);
	
	printf("Enter Column size :");
	scanf("%d",&c);

	int a[r][c],i,j,add=0,rr,sum=0,cc,add1=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	    }
	}
  
    printf("\n=====================\n");
	printf("| Enter Row Number  |\n");
	printf("=====================\n");
	printf("Row :");
	scanf("%d",&rr);

    
        for(i=0;i<r;i++)
        {
        	for(j=0;j<c;j++)
        	{
        		if(rr==i)
        		{
        			printf("%d ",a[i][j]);
        			add+=a[i][j];
				}
			}
		}
	printf("\n=====================\n");
	printf("| Sum of Row Number  |\n");
	printf("=====================\n");
		printf("\n%d",add);
	printf("\n=====================\n");
	printf("| Enter Column Number  |\n");
	printf("=====================\n");
	printf("Row :");
	scanf("%d",&cc);
	
        for(i=0;i<r;i++)
        {
        	for(j=0;j<c;j++)
        	{
        		if(cc==j)	
				{
        			printf("%d ",a[i][j]);
        			add1+=a[i][j];
				}
			}
		}
	printf("\n=====================\n");
	printf("| Sum of Column Number  |\n");
	printf("=====================\n");
	printf("\n%d",add1);
}

