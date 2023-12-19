#include<stdio.h>
#include<string.h>
main()
{
	int i,A=0,a=0,d=0;
	char n[20];
	
	printf("==================================\n");
	printf("Password Must be More Than 6 word\n");
	printf("==================================\n");
	printf("Create Your Password :");
	gets(n);
	
	if(strlen(n)>=6)
	{
		for(i=0;i<=strlen(n);i++)
		{
			if(n[i]>=65 && n[i]<=90)
			{
				A=1;
			}
			else if(n[i]>=97 && n[i]<=122)
			{
				a=1;
			}
			  
			else if(n[i]>=48 && n[i]<=57)
			{
				d=1;
			}
		}
			if(A==1 && a==1 && d==1)
			{
				printf("=========================\n");
				printf("Your password is Strong.\n");
				printf("=========================\n");
			}
			else if(A==1)
			{
				
				printf("=======================\n");
				printf("Your password is Weak.\n");
				printf("=======================\n");
			}
			
			else if(a==1)
			{
				
				printf("============================\n");
				printf("Your password is Very Weak.\n");
				printf("============================\n");
			}
			
			else if(d==1)
			{
				
				printf("================================\n");
				printf("Take Suggestion from Your Elders.\n");
				printf("================================\n");
			}
			else 
			{
				printf("==========================\n");
			    printf("Your password not Strong.\n");	
				printf("==========================\n");
			}
	}
		
}

