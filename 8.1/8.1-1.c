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
   printf("THE ARRAY LENGHT IS :%d",n);

}

