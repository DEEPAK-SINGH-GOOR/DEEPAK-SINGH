#include<stdio.h>
main()
{
	int n,i,j,plus;
	printf("Enter any Number :");
	scanf("%d",&n);
	
	printf("=============================================\n");
	printf(" Program to find Prime numbers between 1 to N.\n");
	printf("==============================================\n\n");

	for(i=2;i<=n;i++)
	{
		plus=1;
		for(j=2;j*j<=n;j++)
		{
			if(i%j==0)
			{
				plus=0;
				break;
			}
		
		}
		if(plus)
		{
			printf("%d ",i);
		}
		
	}
}
