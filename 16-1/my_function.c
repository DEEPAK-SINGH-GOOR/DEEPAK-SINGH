#include<stdio.h>
float getgrade()
{
	float s1,s2,s3,s4,s5,s6,s7,Avg,Per;
	printf("=========================\n");
	printf("Enter Hindi Marks :");
	scanf("%f\n",&s1);
	printf("=========================\n");
	printf("Enter Science Marks :");
	scanf("%f\n",&s2);
	printf("=========================\n");
	printf("Enter S.S Marks :");
	scanf("%f\n",&s3);
	printf("=========================\n");
	printf("Enter Gujrati Marks :");
	scanf("%f\n",&s4);
	printf("=========================\n");
	printf("Enter English Marks :");
	scanf("%f\n",&s5);
	printf("=========================\n");
	printf("Enter Math Marks :");
	scanf("%f\n",&s6);
	printf("=========================\n");
	printf("Enter Biology Marks :");
	scanf("%f\n",&s7);
	printf("=========================\n");
    Per=(s1+s2+s3+s4+s5+s6+s7)/7;
	
	printf("%f\n",Per);
	
	
	
	if(Per>=90&&Per<=100)
	{
		printf("A1 Grade Congratulation!!");
	}
	else if(Per>=80&&Per<=90)
	{
		printf("A2 Grade Very Good!!");
	}
	
	else if(Per>=70&&Per<=80)
	{
		printf("B1 Grade Good!!");
	}
	
	else if(Per>=60&&Per<=70)
	{
		printf("B2 Grade Good!!");
	}
	
	else if(Per>=50&&Per<=60)
	{
		printf("C1 Grade More Practice!!");
	}
	
	else if(Per>=40&&Per<=50)
	{
		printf("C Grade More Practice!!");
	}
	
	else if(Per>=33&&Per<=40)
	{
		printf("Better Luck Next Time !!");
	}
	else
	{
		printf("Better Luck Next Time !!!");
	}
	return Per;
}
