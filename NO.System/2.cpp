#include<stdio.h>
#include<string.h>
main()
{
	int i,j,n,s;

	char nam[20],sub1,sub2,sub3,n1,s1;;
	
	printf("Enter Number of Name :");
	scanf("%d",&n);
	printf("Enter Number of Subject Name :");
	scanf("%d",&s);
	
	for(i=0;i<n;i++)
	{
		printf("%d) Enter Name :",i+1);
	    scanf("%c\n",&n1);
	}
   	for(i=0;i<=s;i++)
	{
    	printf("%d) Enter Subject :",i+1);
    	scanf("%c\n",&s1);	
    }
}
