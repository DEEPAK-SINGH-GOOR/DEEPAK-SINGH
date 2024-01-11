#include<stdio.h>

main()
{
	printf("=======================================================================================\n");
	printf("Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.\n");
	printf("=======================================================================================\n\n");
	
     char n='a'; 
     do
     {
       printf(" %c",n);
       n++;
     }while(n<='z');



}
