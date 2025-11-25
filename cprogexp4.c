//Rudra Gurav
//FE Mechanical 
//251M037
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0;   // not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;   // not prime
    }
    return 1;   // prime
}

// Function to print all prime numbers in the range
void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Ensure num1 < num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printPrimes(num1, num2);

    return 0;
}