#include<stdio.h>
#include<string.h>
main()
{
	int i,n,s,j;

	char nam[n][20],sub[s][20];
	
	printf("Enter Number of Name :");
	scanf("%d",&n);
	printf("Enter Number of Subject Name :");
	scanf("%d\n",&s);
	
	for(i=0;i<n;i++)
	{
		printf("%d) Enter subject :\n",i);
		gets(nam[i]);
	}
 	for(i=0;i<s;i++)
	{
		printf("%d) Enter Subject :\n",i);
         gets(sub[i]);	
   	}
    
    
}

