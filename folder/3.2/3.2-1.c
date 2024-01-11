#include<stdio.h>

main()
{
    float s1,s2,s3,s4,s5,sum,sum2,total;
    
    printf("Enter Math Marks :\n");
    scanf("%f",&s1);
    printf("Enter Science Marks :\n");
    scanf("%f",&s2);
    printf("Enter Hindi Marks\n :\n");
    scanf("%f",&s3);
    printf("Enter Gujrati Marks :\n");
    scanf("%f",&s4);
    printf("Enter English Marks :\n");
    scanf("%f",&s5);
    sum=s1+s2+3+s4+s5;
    printf("Total Marks :%.2f\n",sum);
    printf(" __________________________________________________________\n");
    printf("|N0.      SUBJECT       TOTAL MARKS       ACHIVED MARKS    |\n");
    printf("|__________________________________________________________|\n"); 
    printf("|1)        Math        |     100        |      %.2f        |\n",s1);
    printf("|2)        Science     |     100        |      %.2f        |\n",s2);
    printf("|3)        Hindi       |     100        |      %.2f        |\n",s3);
    printf("|4)        Gujrati     |     100        |      %.2f        |\n",s4);
    printf("|5)        English     |     100        |      %.2f        |\n",s5);
    printf("_______________________|________________|_________________ |\n");
    printf("-             -             500              %.2f           \n",sum);
    printf("__________________________________________________________\n");
    total=(s1+s2+s3+s4+s5)*100;
    sum2=total/500;
    printf("__________________________________________________________\n");
    printf("|Percentage is %.2f                                        |\n",sum2);
    printf("|__________________________________________________________|\n");
    
    
   
    

}
