#include<stdio.h>
main()
{
	int i,n;
	printf("Enter Array Size :");
	scanf("%d",&n);
	
	int a[n],index,value,choice;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n1) Enter For Insert \n 2) Enter For Update\n 3) Enter For Delete\n 4) Enter For Display\n 5) Enter For Exit!!\n");
	
	do
	{
		printf("\nEnter=");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
					// INSERT //
					  printf("Enter Index No. :");
					  scanf("%d",&index);	
					  
					  printf("Enter New Value No. :");
					  scanf("%d",&value);	
					  
					  for(i=n-1;i>=index;i--)
					  {
							a[i+1]=a[i];  	
					  }	
					  
					  a[index]=value;
					  n++;
					  
					  	for(i=0;i<n;i++)
						{
						printf("a[%d]=%d\n",i,a[i]);
						}
			  	break;
			
			case 2:
					// UPDATE //
					  printf("Enter Index No. :");
					  scanf("%d",&index);	
					  
					  printf("Enter New Value No. :");
					  scanf("%d",&value);	
					  
					    a[index]=value;
					  
					    for(i=0;i<n;i++)
						{
						printf("a[%d]=%d\n",i,a[i]);
						}
			break;
			
			case 3:
					// DELETE //
					  printf("Enter Index No. :");
					  scanf("%d",&index);	
					  	
					  for(i=index;i<=n;i++)
					  {
							a[i]=a[i+1];  	
					  }	
					  n--;
					  
					  for(i=0;i<n;i++)
					  {
				    	printf("a[%d]=%d\n",i,a[i]);
				      }

			  	break;
			
			case 4:
					// DISPLAY //	
	 				for(i=0;i<n;i++)
					{
						printf("a[%d]=%d\n",i,a[i]);
					}
	
				  	break;	  
		    case 5:
		    	   // EXIT //
		    	   printf("Coguratulation You Are Exit The loop !!");
		    	   break;
		}
	}while(choice!=5);
	
}
