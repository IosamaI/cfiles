#include <stdio.h>

// Define a struct to hold student data
struct Student {
    char name[50];
    int grade;
};

int main() {
    // Create an array of 10 Student structs
    struct Student students[10];

    // Use a loop to input data for 10 students
    printf("Enter the name and grade of 10 students:\n");
    for(int i = 0; i < 10; i++) {
        printf("Student %d\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Grade: ");
        scanf("%d", &students[i].grade);
    }

    // Use a loop to print the name and grade of 10 students
    printf("\nStudent Grades:\n");
    for(int i = 0; i < 10; i++) {
        printf("%s: %d\n", students[i].name, students[i].grade);
    }

    return 0;
}

