#include<stdio.h>
main()
{
	int n,max=0,a,b,c,d;
	printf("Enter value A:");
	scanf("%d",&a);
	printf("Enter value B:");
	scanf("%d",&b);
	printf("Enter value C:");
	scanf("%d",&c);
	printf("Enter value D:");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A big");
			}
			else
			{
				printf("D big");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C big");
			}
			else
			{
				printf("D big");
			}
		}
	}
	else
	{
		
		if(b>c)
		{
			if(b>d)
			{
				printf("B big");
			}
			else
			{
			printf("D big");
			}	
		}
		else
		{
			if(c>d)
			{
				printf("C big");
			}
			else
			{
				printf("D big");
			}
		}
		
	}
	
}
