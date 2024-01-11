
#include<stdio.h>
main()
{
	int s=10,n=1;
	printf("Enter end value :");
	scanf("%d",&n);
	while(s>=n)
	{
		printf("%d ",n);
		n--;
	}
}

