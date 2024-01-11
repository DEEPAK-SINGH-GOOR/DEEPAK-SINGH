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

	int i;
	for(i=0;i<3;i++)
	{
		fflush(stdin);
		printf("Enter Your ID:");
		scanf("%d\n",&s1.id);
		printf("Enter Your Name :");
		scanf("%d\n",&s1.name);
		printf("Enter Your Age :");
		scanf("%d\n",&s1.age);
		printf("Enter Your Course :");
		scanf("%d\n",&s1.course);
		printf("Enter Your Std :");
		scanf("%d\n",&s1.standard);
		printf("Enter Your School :");
		scanf("%d\n",&s1.school);
		
	 }
	
}
