#include<stdio.h>
 getcalculator()
{
	
   int s,l;
   printf("===============\n");
	printf("!!Calculator!!\n");
	printf("==============\n");
   printf("Enter A:",s);
   scanf("%d",&s);
    printf("Enter B:",l);
   scanf("%d",&l);
   printf("SUM %d  + %d =%d\n",s,l,s+l);
   printf("SUB %d  - %d =%d\n",s,l,s-l);
   printf("MUL %d  * %d =%d\n",s,l,s*l);
   printf("SUM %d  / %d =%d\n",s,l,s/l);
   printf("DIV %d  %% %d= %d\n",s,l,s%l);
   main();
}

float getsub()
{
	int a,b;
	printf("==============\n");
	printf("For Subtraction\n");
	printf("==============\n");
	printf("\nEnter A:");
	scanf("%d",&a);
	printf("\n");
	printf("Enter B:");
	scanf("%d\n",&b);
    printf("Sub :%.2f",a+b);
}
/*1D Array & Output by Using TNRS*/
int getint()
{
	int n;
	scanf("%d",&n);
	return n;
}

void arrayInput(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		a[i]=getint();
	}
}
void arrayOutput(int a[],int n)
{
	printf("\n");
	printf("===================\n");
	printf("1D Array Output \n");
	printf("===================\n");
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]=%d\n",i,a[i]);
		
	}
	printf("\n\n");
}


/*Making 2D Array by Using TNRS*/
/*When using b[r][c] than same out comes some using b[i][j]*/

void array2d()
{
	int r,c;
	printf("Enter Row :");
	scanf("%d",&r);
	printf("Enter column:");
	scanf("%d",&c);

	int i,j,b[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	printf("===================\n");
	printf("2D Array Output \n");
	printf("===================\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]=%d\n",i,j,b[i][j]);
		}
	}
}
/*Border Function*/                       
 
void border(int s,char e)
{
   while(s>=1)
   {
   printf("%c",s);
   s--;	
  }
}
#include<stdio.h>
void sum()
{
	int a,b,sum,n,i;
	printf("Enter A:");
	scanf("%d",&a);
	
	printf("Enter B:");
	scanf("%d",&b);
	
	printf("Sum:%d",a+b);
	
	return 0;
}
