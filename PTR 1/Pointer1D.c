#include<stdio.h>
main()
{
	int arr[5];	
	int i,a[i];
	int *ptr;
			
	for(i=0;i<5;i++)
	{		
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
    for(i=0;i<5;i++)
    {	
    	ptr=&arr[i];
    	//ptr++;
    	printf("\n Addres of Array[%d]\tValue=%d\tAddres =%u",i,a[i],ptr);
	}
}
