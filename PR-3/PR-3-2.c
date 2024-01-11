#include<stdio.h>
main()
{
	printf("=========================================================\n");
	printf(" Program to count the total number of digits in a number.\n");
	printf("=========================================================\n\n");
 
    int count=0,n;
    printf("Enter any degits No. :");
    scanf("%d",&n);
    while(n!=0)
    {
       n=n/10;
       count++;
    }
    printf("Answer :%d",count);
}

