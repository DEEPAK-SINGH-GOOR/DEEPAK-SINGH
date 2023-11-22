#include<stdio.h>

main()
{ 
     printf("============================================================\n");
	 printf("Program to print odd numbers from N to 1 using a while loop.\n");
	 printf("============================================================\n\n");
   int n,i;

   printf("Enter any odd Number :");
   scanf("%d",&n);
   while(n>=i)
   {
       if(n%2==1)
       {
         printf("%d ",n);
       } 
       n--;
   }
 
}
