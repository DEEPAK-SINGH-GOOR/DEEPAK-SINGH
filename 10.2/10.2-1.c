#include<stdio.h>

int calculateSum(int arr[],int size)
{
    int i,sum=0;

    for (i=0;i<size;i++) 
	{
        sum+=arr[i];
    }

    return sum;
}

int main() 
{
    int n;

    printf("Enter Array Size: ");
    scanf("%d",&n);

    printf("======================\n");
    printf("Enter Array Elements\n");
    printf("======================\n");

    int i,a[n];

    for (i=0; i<n;i++) 
	{
        printf("a[%d] =",i);
        scanf("%d",&a[i]);
    }

    int sum=calculateSum(a,n);

    printf("Sum of Array: %d\n",sum);

    return 0;
}
