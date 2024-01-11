#include<stdio.h>
main()
{
	int n;
	printf("PRESS 1 FOR ENGLISH :\n");
	printf("PRESS 2 FOR HINDI   :\n");
	printf("PRESS 3 FOR GUJRati :\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			  	printf("1) PRESS FOR INTERNET RECHARGE :\n");
			  	printf("2) PRESS FOR TOP-UP ! RECHARGE :\n");
			  	printf("3) PRESS FOR SPECIAL! RECHARGE :\n");
			  	scanf("%d",&n);
			  	switch(n)
			  	{
			  	   case 1:
					     printf("YOU'Ve SUCESSFULLY DONE INTERNET RECHARGE !!\n");
						 break;	
                    case 2:
					     printf("YOU'Ve SUCESSFULLY DONE TOP-UP ! RECHARGE !!\n");
						 break;	
					case 3:
					     printf("YOU'Ve SUCESSFULLY DONE SPECIAL! RECHARGE !!\n");
						 break;	
                   
                   
				}
		break;
		case 2:
			    printf("1) INTERNET RECHARGE KE LIYA 1 DABAYE :\n");
			    printf("2) TOP-UP  RECHAREGE KE LIYA 2 DABAYE :\n");
			    printf("3) SPECIAL RECHAREGE KE LIYA 3 DABAYE :\n");
			    scanf("%d",&n);
			    switch(n)
			    {
			    	case 1:
			    		  printf("Aapne safaltapurvak INTERNET RECHARGE kar liya ha!!");
			    		  break;
			       case 2:
			    		  printf("Aapne safaltapurvak TOP-UP  RECHARGE kar liya ha!!");
			    		  break;
                  case 3:
			    		  printf("Aapne safaltapurvak SPECIAL RECHARGE kar liya ha!!");
			    		  break;			    		  
				}
		break;
		case 3:
			
			    		  printf("1) INTERNET RECHARGE MATE 1 DABAVO :\n");
			    		  printf("2) TOP-UP  RECHAREGE MATE 2 DABAVO :\n");
			    		  printf("3) SPECIAL RECHAREGE MATE 3 DABAVO :\n");
			    		  scanf("%d",&n);
			    		  switch(n)
			    		  {
			    		  	case 1:
			    		  		  printf("Tame safaltapurvar INTERNET RECHARGE karyu chhe !!");
			    		  		  break;
			    		  	case 2:
			    		  		  printf("Tame safaltapurvar  TOP-UP  RECHARGE karyu chhe !!");
			    		  		  break;
			    		    case 3:
			    		  		  printf("Tame safaltapurvar SPECIAL RECHARGE karyu chhe !!");
			    		  		  break;
			    		  		  		  
			    		  		  
						  }
			  
	}
	
}

