#include<stdio.h>
main()
{
	int r,c;
	printf("Enter Row Size :");
	scanf("%d",&r);
	printf("Enter column Size :");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	float sum,avg,n;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];	
		}
		n=r*c;
		avg=sum/n;
		
	} 
	printf("\n");
	printf("================\n");
	printf("%.2f\n",avg);
	printf("================");
}
