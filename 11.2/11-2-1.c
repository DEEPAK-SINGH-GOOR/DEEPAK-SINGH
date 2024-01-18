#include <stdio.h>

void reverseArray(int *arr, int size);

int main() 
{
    int size,i;
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];
    printf("\nEnter array elements:\n");
    for (i=0;i<size;i++) 
	{
	 printf("a[%d] = ", i); 
	 scanf("%d", &arr[i]); 
	}

    reverseArray(arr, size);

    printf("\nReversed array elements:\n");
    for (i = 0; i < size; i++)
	{
	 printf("%d ", arr[i], (i<size-1)); 
	}
}

void reverseArray(int *arr, int size)
 {
 	int end,temp,start;
    for (start=0,end=size-1;start<end;start++,end--) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

