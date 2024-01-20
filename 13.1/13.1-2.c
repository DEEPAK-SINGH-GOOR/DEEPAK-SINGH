#include <stdio.h>
int main() 
{
    FILE *fptr1;
    fptr1=fopen("3&5.txt","a");

    if (fptr1 == NULL)
	 {
        printf("Error opening the file.\n");
        return 1;
    }

    int n;
    printf("Enter any Number:");
    scanf("%d",&n);

    if (n%3==0&&n%5==0) 
	{
        fprintf(fptr1,"THE NUMBER IS DIVISIBLE BY 3&5: %d\n",n);
    } 
	else 
	{
        fprintf(fptr1,"THE NUMBER IS NOT DIVISIBLE BY 3&5: %d\n",n);
    }

    fclose(fptr1);
    return 0;
}




