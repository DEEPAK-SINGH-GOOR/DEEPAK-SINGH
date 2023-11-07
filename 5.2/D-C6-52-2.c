#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter A,B,C,D :");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{ 
			 	printf("A is Big");	
			}
			else
			{ 
				printf("D is Big");	
			}
		}
		else
		{
			if(b>d)
			{ 
			 	printf("B is Big");	
			}
			else
			{ 
				printf("D is Big");	
			}
		}
	}
	else
	{
		
		if(b>c)
		{
			if(b>d)
			{ 
			 	printf("B is Big");	
			}
			else
			{ 
				printf("D is Big");	
			}
		}
		else
		{
		    if(a>d)
			{ 
			 	printf("A is Big");	
			}
			else
			{ 
				printf("D is Big");	
			}
		}
		
	}
	
}
