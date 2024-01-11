#include<stdio.h>
int getATM()
{
	
	int n,p,pin=1234,pin1,dep,blance=10000,pin2,pi;
   start:
    
   	printf("\n\n================================\n");
    printf("    !! WELCOME TO SBI BANK  !!\n");
    printf("================================\n\n");
	printf("       HOW CAN I HELP YOU \n");
    printf("      --------------------\n");	
	printf("      |1) CHECK BALENCE  |\n");  
	printf("      |2) CASH WITHDRAWAL|\n");
	printf("      |------------------|\n");
	printf("      |3) CHANGE PIN No. |\n");
	printf("      |4) CASH DEPOSITE  |\n");
	printf("      --------------------\n\n");
	printf("==================================\n");
	printf(" PLEASE ENTER YOUR CHOICE :\n=");
	printf("=================================\n");
	scanf("%d",&n);
    switch(n)
    {
case 1:
      printf("=================================\n");
    printf("    CASH WITHDRAWAL\n");
    printf("PLEASE ENTER YOUR PIN NO.\n=");
    printf("=================================\n");
    scanf("%d",&pin1);
    if(pin==pin1)
    {
    	printf("-----------------------------\n");
    	printf("          !!THANKS !!\n");
    	printf("-----------------------------\n");
     printf("Your Current Blance is :%d\n",blance);
    }
    else
    {
       printf("WRONG PIN No.!!\n");
    }  
    
    break;   
case 2:
	printf("=================================\n");
    printf("    CASH WITHDRAWAL\n");
    printf("PLEASE ENTER YOUR PIN NO.\n=");
    printf("=================================\n");
    scanf("%d",&pin1);
    if(pin==pin1)
    {
    	printf("-----------------------------\n");
    	printf("          !!THANKS !!\n");
    	printf("-----------------------------\n");
    	printf("ENTER AMOUNT TO WITHDRAW CASH\n");
    	printf("-----------------------------\n=");
     scanf("%d",&p);	
     if(pin==pin1)
     {
         if(p<=blance)
         {
            blance=blance-p;
            printf("CASH WITHDRAWAL SUCESSFUL !! %d\n",p);
            printf("CURRENT CASH  BLANCE IS   !! %d\n",blance);
         }
     }
	}
	else
	{
	printf("-------------\n");	
	printf("Wrong PIN No.\n");	
	printf("-------------\n");	
	}
    break;
case 3:
    printf("CHANGE IN PIN No.\n");
   	printf("=================================\n");
    printf("   CASH DEPOSITE\n");
    printf("PLEASE ENTER YOUR OLD PIN NO.\n");
    printf("=================================\n=");
    scanf("%d",&pin1);    
    printf("ENTER YOUR NEW PIN :\n");
    scanf("%d",&pin);
    printf("YOUR PIN CHANGE SUCESSFUL!!\n");
     break;    
case 4:
	printf("=================================\n");
    printf("   CASH DEPOSITE\n");
    printf("PLEASE ENTER YOUR PIN NO.\n");
    printf("=================================\n=");
    scanf("%d",&pin1);
   
     
      
	}
	  if(pin==pin1)
    {
    	printf("-----------------------------\n");
    	printf("          !!THANKS !!\n");
    	printf("-----------------------------\n");
     printf("ENTER THE AMOUNT OF DEPOSITE\n=");
    scanf("%d",&pin2);
     	
 	    if(pin2<=10000)
     	 {
     		blance=blance+pin2;
     		printf("=======================================\n");
     	    printf("AMOUNT DEPOSITE SUCESSFULL !! %d\n",blance);	
     	    printf("====================================\n");
		      }
		     else
		      {
			printf("===========================\n");
			printf("THE MAXIMUN LIMET IS 10000!");
			printf("===========================\n");
		       }	
    }
	else
	{
	printf("-------------\n");	
	printf("Wrong PIN No.\n");	
	printf("-------------\n");	
 	}
  
 	
 	goto start;
  
  }
