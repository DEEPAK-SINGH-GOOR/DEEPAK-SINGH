#include<stdio.h>
void addtion(int n1,int n2)
{
     printf("Enter Number  1:");
     scanf("%d",&n1);
     printf("Enter  Number 2:");
     scanf("%d",&n2);
     
     printf("Ans :%d",n1+n2);
}

void subtract(int n1,int n2)
{
     printf("Enter Number  1:");
     scanf("%d",&n1);
     printf("Enter  Number 2:");
     scanf("%d",&n2);
     printf("Ans :%d",n1-n2);
}

void multiply(int n1,int n2)
{
     printf("Enter Number  1:");
     scanf("%d",&n1);
     printf("Enter  Number 2:");
     scanf("%d",&n2);
     printf("Ans :%d",n1*n2);
}
void division(int n1,int n2)
{
     printf("Enter Number  1:");
     scanf("%d",&n1);
     printf("Enter  Number 2:");
     scanf("%d",&n2);
     printf("Ans :%d",n1/n2);
}
void Percentage(int n1,int n2) 
{
     printf("Enter Number  1:");
     scanf("%d",&n1);
     printf("Enter  Number 2:");
     scanf("%d",&n2);
     printf("Ans :%d",(n1*n2)/100);
}
void main()
{
   int n1,n2;
   int c;
       do{
  
        printf("\n\nPress 1) For Addtion (+)\n"); 
        printf("Press 2) For Subtract(-)\n");     
        printf("Press 3) For Multiply(*)\n");     
        printf("Press 4) For Division(/)\n");     
        printf("Press 5) For Percent (%%)\n");     
        printf("Press 6) For Exit !! (#)\n\n");
        printf("==========================\n");     
        printf("Enter Your Choice !!!!! \n");
        
        scanf("%d",&c);  
        printf("==========================\n");   
              
        switch(c)
        {
              case 1:
                    addtion(n1,n2);
                    break;
             case 2:
                    subtract(n1,n2);
                    break;
              case 3:
                    multiply(n1,n2);
                    break;
              case 4:
                    division(n1,n2);
                    break;
              case 5:
                    Percentage(n1,n2);
                    break;
              case 6:
              		printf("Congratulations You Exit The loop!!");
              	      break;
        }
          
    }while(c!=6);
}

