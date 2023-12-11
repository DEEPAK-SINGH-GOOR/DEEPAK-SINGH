#include<stdio.h>
main()
{
	char s[20];
	int i;
	
	printf("Enter Any Alfabet :");
	scanf("%[^\n]",&s);
	
	for(i=0;i<20;i++)
	{
     	if(s[i]>=97 && s[i]<=122)
     	{
     		s[i]-=32;
		}
		else if(s[i]>=65 && s[i]<=90)
     	{
     		s[i]+=32;
		}			
	}
	printf("=========================\n");
	printf("Output is :%s",s);
	printf("\n=========================");
}
