//Rudra Gurav 
// FE MECHANICAL 
//251M037
#include <stdio.h>

struct student_record {
    char name[50];
    int roll_number;
    int marks[5];
    int total_marks;
};

int main() {
    struct student_record s[5];
    int i, j, topperIndex = 0;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_number);

        s[i].total_marks = 0;
        printf("Enter 5 subject marks:\n");
        for (j = 0; j < 5; j++) {
            scanf("%d", &s[i].marks[j]);
            s[i].total_marks += s[i].marks[j];
        }
    }

    for (i = 1; i < 5; i++) {
        if (s[i].total_marks > s[topperIndex].total_marks) {
            topperIndex = i;
        }
    }

    printf("\nTopper Details:\n");
    printf("Name: %s\n", s[topperIndex].name);
    printf("Roll Number: %d\n", s[topperIndex].roll_number);
    printf("Total Marks: %d\n", s[topperIndex].total_marks);

    return 0;
}