#include <stdio.h>

int main() {
    float physics, chemistry, math, average;


    printf("Enter marks in Physics: ");
    scanf("%f", &physics);
    printf("Enter marks in Chemistry: ");
    scanf("%f", &chemistry);
    printf("Enter marks in Mathematics: ");
    scanf("%f", &math);

    
    average = (physics + chemistry + math) / 3;


    printf("\nAverage Marks: %.2f\n", average);
    
    (average >= 50) ? printf("Eligible for admission.\n")
                    : printf("Not eligible for admission.\n");

    return 0;
}