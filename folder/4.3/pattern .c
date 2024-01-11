#include<stdio.h>
main()
{
	int i='A',j='E',s;
	for(i='A';i<='E';i++)
	{
		for(s='A';s<='E'-i;s++)
		{
			printf("  ");
		}
		for(j='A';j<=i;j++)
		{
		  printf("%c ",i);
		}
		printf("\n");
    }
}
		

