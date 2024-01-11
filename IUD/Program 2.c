#include <stdio.h>
// Include this header for malloc

int main() {
    int i, n, *a, u; // Declare a as a pointer

    printf("Enter Array Size:");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    a = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    for (i = 0; i < n; i++) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("1) For INSERT:\n");
    printf("2) For UPDATE:\n");
    printf("3) For DELETE:\n");
    printf("Input: ");
    scanf("%d", &u);

    switch (u) {
        case 1:
            printf("Enter the element to insert: ");
            scanf("%d", &a[n]);
            n++; // Increment the size of the array
            break;

        case 2:
            printf("Enter the index to update (0 to %d): ", n - 1);
            scanf("%d", &i);
            if (i >= 0 && i < n) {
                printf("Enter the new value: ");
                scanf("%d", &a[i]);
            } else {
                printf("Invalid index\n");
            }
            break;

        case 3:
            printf("Enter the index to delete (0 to %d): ", n - 1);
            scanf("%d", &i);
            if (i >= 0 && i < n) {
                for (int j = i; j < n - 1; j++) {
                    a[j] = a[j + 1];
                }
                n--; // Decrement the size of the array
            } else {
                printf("Invalid index\n");
            }
            break;

        default:
            printf("Invalid input\n");
    }

    // Print the updated array
    printf("Updated Array:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d]=%d\n", i, a[i]);
    }

    // Free dynamically allocated memory
    free(a);

    return 0;
}

