#include<stdio.h>
main ()
{
     int n ;
     float a,b,c,d ;
   
     printf (" enter your unit : " ) ;
     scanf ("%d",&n) ; 
    if (n>=1 && n<=50)
    {
        a=n*0.5;
        printf("Your Electric Bill is %.2f",(a*0.2)+a);
    } 
    else if (n>=51 && n<=150)
    {
        b=((n-50)*0.75+25);
        printf("Your  Electric Bill is %.2f",(b*0.2)+b);
    } 
    
    else if(n>151 && n<=250)
    {
        c=((n-150)*1.20+50);
        printf("Your  Electric Bill is %.2f",(c*0.2)+c);
    }
    
    else if(n>=250)
    {
        d=((n-250)*1.50+220);
        printf("Your  Electric Bill is %.2f",(d*0.2)+d);
    }
    else
    {
       printf("YOUR  Electric BILL UNIT IS INVALIDE !!");
    }
}


