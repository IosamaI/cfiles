//Write a C program that prints grades of 10 students along with their names using struct.
#include <stdio.h>

#include <stdio.h>

// Define a struct to hold student information
struct Student {
    char name[50];
    int grade;
};

int main() {
    // Declare an array of 10 Student structs
    struct Student students[10];
    
    // Input names and grades of 10 students
    for (int i = 1; i < 11; i++) {
        printf("Enter the name of student %d: ", i );
        scanf("%s", students[i].name);
        printf("Enter the grade of student %d: ", i );
        scanf("%d", &students[i].grade);
    }
    
    // Output names and grades of 10 students
    printf("\n--- Students and Grades ---\n");
    for (int i = 1; i < 11; i++) {
        printf("Student %d: %s, Grade: %d\n", i, students[i].name, students[i].grade);
    }
    
    return 0;
}
