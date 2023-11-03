#include<stdio.h>
#include<conio.h>
main()
{
	float r,area;
	float pi=3.1415;


	clrscr();
	printf("enter value of radius: ");
	scanf("%f",&r);
	area=pi*r*r;
	printf("are of circle is: %.2f  ", area);

	getch();
}
