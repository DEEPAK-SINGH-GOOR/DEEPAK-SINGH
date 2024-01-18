#include<stdio.h>
main()
{
	int n;
	printf("Enter Array's Size:");
	scanf("%d",&n);
	int*ptr;
	int a[n],i;

	for(i=0;i<n;i++){
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		ptr[i]=a[i];
	}
	for(i=0;i<n;i++){
		printf("%d ",ptr[i]*ptr[i]);
	}
}
