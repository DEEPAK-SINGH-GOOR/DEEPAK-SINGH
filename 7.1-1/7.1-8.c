#include<stdio.h>

main()
{ 
  
   int s,i,j,a=1;
     for(i=1;i<=5;i++)
    {
    	for(s=1;s<=i-1;s++)
	    {
	    printf("  ");

      for(j=i;j<=5;j++,a++)
    	{
          printf("%d ",a);   
    	}
    	printf("\n");
  	   }
  }
}

