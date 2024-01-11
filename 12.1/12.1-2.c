#include<stdio.h>
#include<string.h>
struct students
{
   int id[20];
   char name[20];
   int  age[20];
   char role[20];
   char city[20];
   int  experience[20];
   char companyname[20];
   int no[100];

}s1;

void main()
{
	fflush(stdin);
	int i;
	
	printf("Enter No. Of Employee :");
	scanf("%d",&s1.no);
	
	for(i=0;i<s1.no[100];i++)
	{
		printf("\nEnter Your ID:");
		scanf("%d\n",&s1.id[20]);
			fflush(stdin);
		printf("Enter Your Name :");
		scanf("%d",&s1.name[20]);
			fflush(stdin);
		printf("Enter Your Age :");
		scanf("%d",&s1.age[20]);
			fflush(stdin);
		printf("Enter Your Role :");
		scanf("%d",&s1.role[20]);
			fflush(stdin);
		printf("Enter Your Experience:");
		scanf("%d",&s1.experience[20]);
		    fflush(stdin);
		printf("Enter Your Company Name :");
		scanf("%d",&s1.companyname[20]);
	}
}
