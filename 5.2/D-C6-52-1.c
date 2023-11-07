#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter A,B,C :");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("A is Minimun");
		}
		else
		{
			printf("C is Minimun");
		}
	}
	else
	{
		
		if(b<c)
		{
			printf("B is Minimun");
		}
		else
		{
			printf("C is Minimun");
		}
		
	}
	
}
