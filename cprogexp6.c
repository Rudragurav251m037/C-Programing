//Rudra Gurav 
//FE Mechanical 
//251M037
#include <stdio.h>

// Function to count how many times it is called
void counter() {
    static int count = 0;   // static variable retains its value
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    // Call the function multiple times
    counter();
    counter();
    counter();
    counter();

    return 0;
}