#include<stdio.h>
#include<conio.h>
main()
{
   float a,b,c,ans,price;
   clrscr();
   printf("A] enter the price of sandwich : ",a);
   scanf("%f",&a);
   printf("B] enter the price of vadapav  :",b);
   scanf("%f",&b);
   printf("C] enter the price of veg roll :",c);
   scanf("%f",&c);
   ans=a+b+c;
   ans+=ans*0.18;
   printf("total bill is :%.2f",ans);


   getch();
}
