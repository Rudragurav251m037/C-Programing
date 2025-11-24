//RudraGurav 
//FE_Mechanical
//DivF
//UIN_251M037
#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &start);
    
    printf("Enter the second number: ");
    scanf("%d", &end);

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    
    printf("The sum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}