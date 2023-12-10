1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1

#include<stdio.h>
main()
{
	int i,j,n=4,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=n;s++)
		{
			printf("  ");
	    }
	    n++;
     	for(j=1;j<=i;j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
}
