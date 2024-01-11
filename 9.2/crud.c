#include<stdio.h>
main()
{
	int i,j,n,a[n],u,choice,b;
	printf("Enter Array Element Size:");
	scanf("%d",&n);
	
	for(i=0;i<=n-1;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	do
	{
		
	
	printf("1) For INSERT:\n");
    printf("2) For UPDATE:\n");
    printf("3) For DELETE:\n");
    printf("4) For DISPLAY:\n");
    printf("5) For EXIT..!!\n");
    
    printf("Input: ");
    scanf("%d", &u);
    
	   if(u<n+1)
	   {
		switch (u) 
		{
        case 1:
        		printf("Enter the element to insert: ");
            	scanf("%d",&b);
            	
            	for(i=0;i<=n;i++)
        		{
        		printf("a[%d]=%d\n",i,a[i]);
				}
            break;
            	
		case 2:
            printf("Enter index for update (0to%d):",n-1);
            scanf("%d",&i);
            
            if (i>=0 && i<=n) 
			{
                printf("Enter the new value: ");
                scanf("%d", &a[i]);
            	
            	for(i=0;i<n+1;i++)
            	{
            		printf("a[%d]=%d\n",i,a[i]);
				}
			} 
			else 
			{
                printf("Invalid index\n");
            }
            break;
        case 4:
        		for(i=0;i<=n-1;i++)
				{
				printf("a[%d]=",i);
				scanf("%d",&a[i]);
		        }
        }
	}

    }while(choice !=5);

	printf("Index Error !!!!!!!!!!!!!!");
	
	
}
