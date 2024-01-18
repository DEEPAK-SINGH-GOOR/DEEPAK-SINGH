#include<stdio.h>
main()
{
	int n1,n2,*x,*y;;
	printf("Enter y:");
	scanf("%d",&n1);
	printf("Enter x:");
	scanf("%d",&n2);
	x=&n1;
	y=&n2;
	*x = *x+*y;
	*y = *x-*y;
	*x = *x-*y;
	printf("x:%d\n",*x);
	printf("y:%d",*y);
}
