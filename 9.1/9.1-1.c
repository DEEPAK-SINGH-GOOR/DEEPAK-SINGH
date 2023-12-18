#include<stdio.h>
main()
{
	char s[30];
	int i,n;
	
	printf("Enter Any Alfabet :");
	scanf("%[^\n]",&n);
	
	for(i=0;i<30;i++)
	{
     	if(s[i]>=97 && s[i]<=122)
     	{
     		s[i]-=32;
		}		
	}
	printf("=========================\n");
	printf("Output is :%s",n);
	printf("\n=========================");
}
