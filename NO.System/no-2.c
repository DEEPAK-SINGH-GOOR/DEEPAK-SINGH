#include<stdio.h>
#include<string.h>
#define P printf
#define S scanf
main()
{
	int i,j,n,s;
	P("Enter No. of Names :");
	S("%d",&n);
		printf("Enter Number of Subject Name :");
	scanf("%d\n",&s);
	
	char names[30],tmp[30],subject[30];
	
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		P("%d) Enter Name :");
		gets(names[i]);
	}
		for(i=0; i<n ; i++)
	{
		printf("%d)Enter the student name : ",i+1);
		scanf("%c",&names[i]);
		
		for(j=0; j<s ; j++)
		{
			printf("\t%d. subject name : ",j+1);
			scanf("%c",&subject[j]);
		}
	}
	for(i=0;i<n;i++)
	{
			for(j=i+1;j<n;j++)
			{
				if(names[i],names[j]==1)
				{
					strcpy(tmp,names[i]);
					strcpy(names[i],names[i]);
					strcpy(names[j],tmp);
				}
			}
	}
	for(i=0;i<n;i++)
	{
		P("%d Names : %s\n",i+1,names[i]);
	}
}
