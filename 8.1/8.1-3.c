#include<stdio.h>
main()
{
   int n;
   
   printf("Enter Array Size :"); 
   scanf("%d",&n);
   
   printf("======================\n");
   printf("Enter Array Elements \n");
   printf("======================\n");
   
   int i,a[n];
  
   for(i=0;i<n;i++)
   {
     printf("a[%d]=",i);
     scanf("%d",&a[i]);
  
     
   }
   printf("\n");
   int b[n],c[n];
   printf("Enter Array B's Elements\n'");
      for(i=0;i<n;i++)
   {
     printf("b[%d]=",i);
     scanf("%d",&b[i]);
  
     
   }
      for(i=0;i<n;i++)
   {
       c[i]=a[i]+b[i];
   }
   printf("\n");
   printf("-------------------------------------\n");
   printf("THE SUM OF A & B IS :");
   for(i=0;i<n;i++)
   {
       printf("%d ",c[i]);
   }
}
