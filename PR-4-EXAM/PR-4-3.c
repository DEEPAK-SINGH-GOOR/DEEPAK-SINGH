/*       5
       4 5
     3 4 5
   2 3 4 5
 1 2 3 4 5
*/
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
	    n--;
     	for(j=i;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
