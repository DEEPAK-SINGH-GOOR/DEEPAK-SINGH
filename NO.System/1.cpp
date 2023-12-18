#include<stdio.h>
#include<string.h>

main()
{
	int n,i,p,j;
	printf(" Enter the total number of students :");
	scanf("%d",&n);
	printf(" Enter the total number of subjects  :");
	scanf("%d",&p);
	
	char names[n][25],tmp[30],subjects[p][25];
	
	fflush(stdin);
	printf("\n\n");
	
	for(i=0; i<n ; i++)
	{
		printf("%d)Enter the student name : ",i+1);
		gets(names[i]);
		
		for(j=0; j<p ; j++)
		{
			printf("\t%d. subject name : ",j+1);
			gets(subjects[j]);
		}
	}
	
	printf("\n");
	

	
}
