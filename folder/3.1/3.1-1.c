#include<stdio.h>
#include<conio.h>
main()
{
   int a;
   int b;
   int c;
   clrscr();
   printf("enter the value of a :");
   scanf("%d",&a);
   printf("enter the value of b :");
   scanf("%d",&b);
   c=a;
   a=b;
   b=c;
   printf("swap value is :\n");
   printf("a is : %d\n",a);
   printf("b is : %d\n",b);
   getch();
}
