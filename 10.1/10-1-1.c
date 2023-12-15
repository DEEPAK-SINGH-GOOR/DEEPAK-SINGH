#include<stdio.h>
int cube()
{
  
   int n,sum;
   printf("Enter any Number :");
   scanf("%d",&n);
   printf("\n\n");
   sum=n*n*n;
   printf("-----------------------------\n");
   printf("The Cube of value is  :%d",sum);
   printf("\n-----------------------------\n");
}  
   main()
   { 
      cube();
   }
