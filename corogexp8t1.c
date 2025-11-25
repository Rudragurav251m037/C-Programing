// Rudra Gurav 
// FE MECHANICAL 
// 251M037
#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    gets(str);   // Note: gets is unsafe, but commonly used in basic programs

    // Count characters until null terminator '\0'
    while (str[len] != '\0') {
        len++;
    }

    printf("Length of the string = %d\n", len);

    return 0;
}