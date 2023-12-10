           *
         * * *
       * * * * *
     * * * * * * *
   * * * * * * * * *  
     * * * * * * *
       * * * * *
         * * *
           *
#include<stdio.h>
main()
{
	int i,j,s,n=4,n1=1;
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=n;s++)
		{
			printf("  ");
		}
  n--;
		for(j=i;j<=5;j++)
		{
			printf("* ",j);
		}
		
for(j=4;j>=i;j--)
  {
   printf("* ",j);
  }
   printf("\n");
	}
	for(i=2;i<=5;i++)
	{
		for(s=1;s<=n1;s++)
		{
			printf("  ");
		}
  n1++;
		for(j=i;j<=5;j++)
		{
			printf("* ",j);
		}
		for(j=4;j>=i;j--)
		{
			printf("* ",j);
		}
		printf("\n");
		
	}
	
}
