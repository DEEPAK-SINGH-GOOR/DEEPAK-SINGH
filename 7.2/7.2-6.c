#include<stdio.h>

main()
{
	int i,j,s,a=1,b;

	for(i=1;i<=10;i++)
	{
	  for(s=1;s<=i-1;s++,a++,b++)
	    {
	    printf("  ");

	    }
	     for(j=10;j>=i;j--,a++,b++)
	     {
		printf("%d ",b);
	     }
	     printf("\n");
	}

}
