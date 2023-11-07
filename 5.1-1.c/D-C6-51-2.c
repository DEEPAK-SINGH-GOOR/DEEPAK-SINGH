#include<stdio.h>
main()
{
	int a;
	printf("Enter Any Number :");
	scanf("%d",&a);
	
	
	if(a<=0)
	{
		
	   printf("This Value is Nagative !!");

	}
	else if (a==0)
	{
		printf("This Value is Natural   !!");
	}
    else
    {
    	printf("This Value is Positive  !!");
	}
}
