#include<stdio.h>
# define P printf
struct student
{
	int id;
	char name[40];
	int ch;
	int phy;
	int math;
};

void main()
{
	int i,n,t[10],per[10];
	struct student s1[10];
	printf("Enter No. of Students :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		P("Enter Roll No :");
		scanf("%d",&s1[i].id);
		fflush(stdin);
		P("Enter Your Name :");
		scanf("%s",&s1[i].name);
		fflush(stdin);
		P("Chemistry Marks :");
		scanf("%d",&s1[i].ch);
		P("Physics Marks :");
		scanf("%d",&s1[i].phy);
		P("Maths Marks :");
		scanf("%d",&s1[i].math);
		t[i] = s1[i].ch+s1[i].phy+s1[i].math;
		per[i]=t[i]/3;
		
		P("\n");
	}
	
	for(i=0;i<n;i++)
	{
		P("\n\n");
		P("%d)Name    :%s\n",s1[i].id,s1[i].name);
		P("Chemistry :%d\n",s1[i].ch);
		P("Physics   :%d\n",s1[i].phy);
		P("Math      :%d\n",s1[i].math);
		P("Total     :%d\n",t[i]);
		P("Percentage:%d\n",per[i]);
		P("\n\n\n");
	}
}
