#include<stdio.h>
#include<conio.h>
main()
{
       float a=0.5;
	float b;
	float h,area;
	clrscr();
	printf("enter value of b :");
	scanf("%f",&b);
	printf("enter value of h:");
	scanf("%f",&h);
	area=a*b*h;
	printf("value of tringle :%.2f",area);
	getch();
}
