#include<stdio.h>

void main()
{
	 printf("============================================\n");
	 printf(" Program to print 1 to N using a while loop.\n");
	 printf("============================================\n\n");
    int n,i=1;

    printf("Enter the value :");
    scanf("%d",&n);
   
    while(i<=n)
    {
      printf(" %d",i);
      i++;
    }
    
}
