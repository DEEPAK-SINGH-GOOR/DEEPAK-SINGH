#include<stdio.h>
#include<conio.h>
main()
{
    int x;
    int y;
    int ans;
    clrscr();
    printf("enter the value of x :");
    scanf("%d",&x);
    printf("enter the value of y :");
    scanf("%d",&y);
    ans=(x*x*x)+(y*y*y)+(3*x*y);
    printf("answer is :%d",ans);
    getch();
}
