#include<stdio.h>
main()
{
	int a;
	printf("Enter Any Number :");
	scanf("%d",&a);
	
	
	if(a<0)
	{
	   printf("===========================\n");	
	   printf("This Value is  Nagative  !!\n");
       printf("===========================\n");
	}
	else if (a==0)
	{
		printf("===========================\n");
		printf("This Value is Natural   !!\n");
		printf("===========================\n");
	}
    else
    {
    	printf("===========================\n");
    	printf("This Value is Positive  !!\n");
    	printf("===========================\n");
	}
}
