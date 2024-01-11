#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter value A:");
	scanf("%d",&a);
	printf("Enter value B:");
	scanf("%d",&b);
	printf("Enter value C:");
	scanf("%d",&c);
   
   	(a>b)
   		?(a>c)
   			 ?printf("A big")
   			 :printf("C big")
		:(b>c)
			 ?printf("B big")
			 :printf("C big");
}
