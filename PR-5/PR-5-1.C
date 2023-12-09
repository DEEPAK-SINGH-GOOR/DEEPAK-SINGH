#include<stdio.h>
main()
{
	int n;
	printf("Enter array size :");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n!! Nagative Value !!\n");
	
	for(i=0;i<n;i++)
	{
		 if(0>a[i])
	  {
	  	printf(" %d",a[i]);
	  }

	}
}

