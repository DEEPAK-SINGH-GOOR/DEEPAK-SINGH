#include<stdio.h>
#include"string.h"

void srtingIn(char a[]){
	printf("Enter Any String:");	
	gets(a);
}
char strleng(char a[]){
	return strlen(a);
}
void main()
{
	char a[50];
	srtingIn(a);
	printf("length is:");
	printf("%d",strleng(a));
}
