#include<stdio.h>

main()
{
    printf("=========================================================================\n");
	printf("Program to print leap years between two given numbers using a while loop.\n");
	printf("=========================================================================\n\n");
  
   int i,y1,y2;
   
   printf("Enter year y1 :");
   scanf("%d",&y1);
   printf("Enter year y2 :");
   scanf("%d",&y2);
   i=y1;
   while(i<=y2)
   { 
      if(i%4==0)
      printf(" %d",i);
      i++;
   }
 
}
