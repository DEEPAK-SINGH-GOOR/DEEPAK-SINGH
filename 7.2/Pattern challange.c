#include<stdio.h>

main()
{ 
  
     int i,j,a=1,s;
     
     for(i=1;i<=5;i++)
    {
    	for(s=1;s<=5-i;s++)
	    {
	    printf("  ");
		}
		
      for(j=i;j<=5;j++,a++)
    	{
          printf("%3d",a);   
    	}
    	printf("\n");
  	}
}

