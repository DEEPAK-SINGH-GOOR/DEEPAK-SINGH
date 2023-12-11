#include<stdio.h>
main()
{
   int n;
   
   printf("Enter Array Size :"); 
   scanf("%d",&n);
   
   printf("=========================\n");
   printf("Enter Array A's Elements \n");
   printf("=========================\n");
   
   int i,a[n];
  
   for(i=0;i<n;i++)
   {
     printf("a[%d]=",i);
     scanf("%d",&a[i]);
  
     
   }
   printf("\n");
   int b[n],c[n];
    printf("==========================\n");
   printf("Enter Array B's Elements\n'");
    printf("==========================\n");
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
   printf("Array 'C' IS :");
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
     for(i=0;i<n;i++)
   {
       printf("%d ",b[i]);
   }
}
