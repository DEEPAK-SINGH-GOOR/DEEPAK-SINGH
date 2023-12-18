#include<stdio.h>
main()
{
	char str[20],rev[20],copy[20];
	int i,len=0,cmp=0;
	
	printf("enter any string :- ");
	scanf("%s",&str);
	
	for(i=0;str[i] != '\0'; i++)
	{
		len++;
	}
	//for(i=0;i<len;i++)
	//{	
		//copy[i] = str[i];
	//}
	for(i=0; i<len;i++)
	{
		rev[len-i-1]=str[i];
	}
	for(i=0;i<len;i++)
	{
		if(rev[i] == str[i])
		{
			cmp=1;
		}
	}
	if(cmp=1)
	{
			printf("palindrome...");
	}
	else
	{
		printf("not palindrome..");
	}
}
