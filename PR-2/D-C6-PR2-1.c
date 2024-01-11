#include<stdio.h>

main()
{
  int n;

  printf("Enter any value :");
  scanf("%d",&n);
  (n%4==0)
	 ?printf("This value is Even!!")
	 :printf("This value is Odd!!");
}
