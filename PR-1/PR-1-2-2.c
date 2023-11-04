#include<stdio.h>

main()
{
	float HRA,DA,TA;
	float base;
	float ans;

	printf("Enter  base salary :");
	scanf("%f",&base);
	HRA=base*0.10;
	printf("HRA :%.2f\n",HRA);
    DA=base*0.05;
	printf("DA :%.2f\n",DA);
    TA=base*0.08;
   	ans=base+HRA+DA+TA;
    printf(" TA :%.2f\n",TA);
    ans=base+HRA+DA+TA;
	printf("TOTAL AMOUNT :%f",ans);

}
