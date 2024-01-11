#include<stdio.h>
main()
{
	int i,j,n,a[n],u;
	printf("Enter Array Size:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	printf("1) For INSERT:\n");
    printf("2) For UPDATE:\n");
    printf("3) For DELETE:\n");
    printf("Input: ");
    scanf("%d", &u);
    if(u<n+1)
	{
		
    	switch (u) 
		{
        case 1:
        		printf("Enter the element to insert: ");
            	scanf("%d", &a[i]);
            	
            	for(i=0;i<=n+1;i++)
        		{
        		printf("a[%d]=%d\n",i,a[i]);
				}
            	break;
            	
		   case 2:
            printf("Enter index for update (0to%d):",n);
            scanf("%d",&i);
            
            if (i>=0 && i<n) 
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
		}
	}
	else
	{
		printf("Index Error !!!!!!!!!!!!!!");
	}
}
