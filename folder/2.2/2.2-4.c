#include<stdio.h>
#include<conio.h>
main()
{
	float a=100;
	float p;
	float r;
	float n,area;

	clrscr();
	printf("enter value of p :");
	scanf("%f",&p);
	printf("enter value of r :");
	scanf("%f",&r);
	printf ("enter value of n :");
	scanf("%f",&n);
	area=(p*r*n)/a;
	printf("area of simle intrest :%f",area);


	getch();
}
