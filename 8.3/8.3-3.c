 #include<stdio.h>
 main()
 {
 
 int r,c;
    printf("Enter Row Size :");
    scanf("%d",&r);
    printf("Enter Coloumn Size :");
    scanf("%d",&c);
    
    int a[r][c],i,j,sum=0;
 
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++) 
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[r][c]);
            
           if(i==j)
           {
           	  sum+=a[r][c];
		   }
		   
		}
    }
    printf("The Sum of Diagonal Elements of Array :");
     printf("%d",sum);
    	
}
