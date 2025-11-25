// Rudra Gurav 
// FE MECHANICAL 
//251M037
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");
    p = &arr[n - 1];

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *p);
        p--;
    }

    return 0;
}