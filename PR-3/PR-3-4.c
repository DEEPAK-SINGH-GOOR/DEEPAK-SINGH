#include<stdio.h>
main()
{
	int v,i,j,plus=0;
	printf("Enter any Number :");
	scanf("%d\n",&v);
	
	printf("=============================================\n");
	printf(" Program to find Prime numbers between 1 to N.\n");
	printf("==============================================\n\n");

	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
		{
			if(i%j==0)
			{
				plus++;
			}
		}
		if(plus<=2)
		{
			printf("%d ",i);
		}
		plus=0;
	
	}
	return 0;
}
