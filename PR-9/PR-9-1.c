#include<stdio.h>
#include<string.h>

void main()
{
   	char string[20];
   	int *ptr;
   	ptr=&string;
   	
	printf("Enter Any Name :");	
    gets(string);
    
    *ptr=strlen(string);
	printf("Output:%d",*ptr);
}
