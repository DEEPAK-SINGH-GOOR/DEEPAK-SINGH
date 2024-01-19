#include<stdio.h>
#include<string.h>
struct students
{
   int id;
   char name;
   int  age;
   char course;
   char city;
   int  standard;
   char school;

}s1;

void main()
{
	printf("Enter No. of Student : ");
	int n = getInt();
	
	fflush(stdin);
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter Your ID:");
		scanf("%d\n",&s1.id);
			fflush(stdin);
		printf("Enter Your Name :");
		scanf("%d",&s1.name);
			fflush(stdin);
		printf("Enter Your Age :");
		scanf("%d",&s1.age);
			fflush(stdin);
		printf("Enter Your Course :");
		scanf("%d",&s1.course);
			fflush(stdin);
		printf("Enter Your Std :");
		scanf("%d",&s1.standard);
		    fflush(stdin);
		printf("Enter Your School :");
		scanf("%d",&s1.school);
	}
		for(i=0;i<n;i++)
	{
		printf("\n\nEnter Your ID:%d",s1.id);

			fflush(stdin);
		printf("Enter Your Name :%d",s1.name);
		
		fflush(stdin);
		printf("Enter Your Age :%d",s1.age);
		fflush(stdin);
		printf("Enter Your Course :%d",s1.course);
		fflush(stdin);
		printf("Enter Your Std :%d",s1.standard);
		scanf("%d",&s1.standard);
	    fflush(stdin);
		printf("Enter Your School :%d",s1.school);
	}
}
