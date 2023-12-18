#include<stdio.h>
#include<string.h>
#define P printf 
#define S scanf
main()
{
	int n,s,i,j;
	P("Enter The No. of Students :");
	S("%d",&n);
	P("Enter The No. of Subjects :");
	S("%d\n\n",&s);
	
	char nam[n][20],sub[s][20];
	fflush(stdin);
	for(i=0; i<n ; i++)
	{
		P("%d)Enter the student name : ",i+1);
		gets(sub[n]);
		
		for(j=0; j<s ; j++)
		{
		P("%d) subject name : ",j+1);
		gets(sub[j]);
		}
	}
	P("\n");
}
