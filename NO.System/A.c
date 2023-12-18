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
	S("%d",&s);
	
	char nam[n][20],sub[s][20];
	
	for(i=0;i<n;i++)
	{
		P("Enter Name Of Students:");
		S("%c",&nam[i]);
		
		for(j=0;j<s;j++)
		{
		P("Enter Name Of Subjects:");
		S("%c",&sub[j]);
		}
	}
}

