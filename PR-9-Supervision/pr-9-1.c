#include<stdio.h>
void main()
{
	FILE*fptr1,*fptr2;
	
	fptr1=fopen("even.txt","w");
	fptr2=fopen("odd.txt","w");
	int i;
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(fptr1,"%d ",i);
		}
		else
		{
			fprintf(fptr2,"%d ",i);
		}
	}
}
