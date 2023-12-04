#include<stdio.h>
main()
{
   int n;
   
   printf("Enter Array Size :"); 
   scanf("%d",&n);
   
   printf("======================\n");
   printf("Enter Array Elements \n");
   printf("======================\n");
   
   int i,a[n],sum=0;
   float avg;
   for(i=0;i<n;i++)
   {
     printf("a[%d]=",i);
     scanf("%d",&a[i]);
    sum+=a[i];
     
   }
   avg=sum/n;
   
      printf("Average of Array :%f",avg);
 }
