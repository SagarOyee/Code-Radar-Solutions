#include <stdio.h>

int main() {
    int num1, num2, sum;

    
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculating the sum
    sum = num1 + num2;

    // Printing the sum
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
