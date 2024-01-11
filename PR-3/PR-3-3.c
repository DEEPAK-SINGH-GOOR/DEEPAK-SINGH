#include<stdio.h>

main()
{
	printf("==================================================================\n");
	printf("Program to find the sum of a first and the last digit of a number.\n");
	printf("==================================================================\n\n");
 

   int i,n,sum,d,e;
 
   printf("Enter any three degits No. :");
   scanf("%d",&n);
   d=n%10;
   while(n>10)
   {
	  n=n/10;
   }
    sum=n+d;
	printf("%d",sum);
	
}
