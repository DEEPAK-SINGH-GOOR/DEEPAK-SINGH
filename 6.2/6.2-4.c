#include<stdio.h>

main()
{
	printf("======================================================================\n");
	printf(" Program to print the fibonacci series up to N numbers using for loop.\n");
	printf("====================================================================\n\n");
 
	 
 int i,n,a,b,c;

  printf("Enter any value :");
  scanf("%d",&n);
  
  a=0;
  b=1;
  
  for(i=1; i<=n; i++)
  {
    printf(" %d,",a);
    c=a+b;
    a=b;
    b=c;
  }
}
