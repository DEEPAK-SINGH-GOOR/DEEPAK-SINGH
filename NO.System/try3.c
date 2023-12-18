#include<stdio.h>
#include<string.h>

main()
{
	int n,i,p,j;
	

	printf(" number of students :\n");
	scanf("%d",&n);
	

	printf(" number of subjects :\n");
	scanf("%d",&p);
	
	char names n=[25],tmp[30],subjects p=[25];
	
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
	

	
	for(i=0; i<n ; i++)
	{
		for(j=i+1; j<n ; j++)
		{
			if(strcmp(names[i],names[j])==1)
			{
				strcpy(tmp,names[i]);
				strcpy(names[i],names[j]);
				strcpy(names[j],tmp);
			}
		}
	}
	
	for(i=0; i<n ; i++)
	{
		for(j=i+1; j<n ; j++)
		{
			if(strcmp(subjects[i],subjects[j])==1)
			{
				strcpy(tmp,subjects[i]);
				strcpy(subjects[i],subjects[j]);
				strcpy(subjects[j],tmp);
			}
		}
	}
	
	for(i=0 ; i<n ; i++)
	{
		printf("%d) student name: %s \n",i+1,names[i]);
		
			for(j=0 ; j<p ; j++)
				{
					printf("\t%d. subjects: %s \n",j+1,subjects[j]);
				}
	}
	
}
