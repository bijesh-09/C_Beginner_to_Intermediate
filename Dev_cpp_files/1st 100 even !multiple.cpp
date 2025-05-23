#include <stdio.h>

// Function to check if a number is divisible by 3, 5, or 9
int isDivisibleBy3_5_9(int num) {
    if (num % 3 == 0 || num % 5 == 0 || num % 9 == 0) {
        return 1; // True
    } else {
        return 0; // False
    }
}

// Function to calculate the sum of the first 100 even natural numbers
int sumOfEvenNumbers() {
    int count = 0; // Count of even numbers found
    int num = 2;  // Start from the first even natural number (2)
    int sum = 0;  // Initialize the sum to zero

    while (count < 100) {
        if (!isDivisibleBy3_5_9(num)) {
            sum += num;
            count++;
        }
        num += 2; // Move to the next even number
    }

    return sum;
}

int main() {
    int result = sumOfEvenNumbers();
    printf("Sum of the first 100 even natural numbers (excluding multiples of 3, 5, and 9): %d\n", result);
    return 0;
}

