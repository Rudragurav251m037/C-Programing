//Rudra Gurav
//FE Mechanical 
//251M037
#include <stdio.h>

// Recursive function to find factorial
long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

// Iterative function to find factorial
long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        printf("Factorial of %d (Recursive) = %lld\n", num, factorialRecursive(num));
        printf("Factorial of %d (Iterative) = %lld\n", num, factorialIterative(num));
    }

    return 0;
}