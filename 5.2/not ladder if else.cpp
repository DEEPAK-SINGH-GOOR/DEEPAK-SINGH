#include <stdio.h>

int main() {
    // Variable to store the input number
    float num;

    // Input
    printf("Enter any number: ");
    scanf("%f", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("This number is Negative\n");
    }

    // Check if the number is neutral
    if (num == 0) {
        printf("This number is Neutral\n");
    }

    // Check if the number is positive
    if (num > 0) {
        printf("This number is Positive\n");
    }

    return 0;
}
