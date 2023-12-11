#include<stdio.h>
main()
{
	char s[30];
	int i;
	
	printf("Enter Any Alfabet :");
	scanf("%[^\n]",&s);
	
	for(i=0;i<30;i++)
	{
     	if(s[i]>=65 && s[i]<=90)
     	{
     		s[i]+=32;
		}		
	}
	printf("=========================\n");
	printf("Output is :%s",s);
	printf("\n=========================");
}
