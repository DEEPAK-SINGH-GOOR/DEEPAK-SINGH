#include<stdio.h>
void div()
{
  
   int n;
   printf("Enter any Number :");
   scanf("%d",&n);
   printf("\n\n");
   if(n%3==0 && n%5==0)
   { 
      printf("================================\n");
      printf("THE NUMBER IS DIVISIBLE BY 3 & 5");
      printf("\n================================");
   }
   else
   {
      printf("====================================");
      printf("THE NUMBER IS NOT DIVISIBLE BY 3 & 5");
      printf("====================================");
   }
}
main()
{
	
	div();
}
