#include<stdio.h>
#include<string.h>

void main()
{
   	char str[20];
   	int *ptr;
   	ptr=&str;
   	
	printf("Enter Any Name :");	
    gets(str);
    
    *ptr=strlen(str);
	printf("Output:%d",*ptr);
}
