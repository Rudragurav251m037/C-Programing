// Rudra Gurav
// FE Mechanical 
//251M037
#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++);

    for (j = 0, i = i - 1; j < i; j++, i--) {
        if (str[j] != str[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");

    return 0;
}