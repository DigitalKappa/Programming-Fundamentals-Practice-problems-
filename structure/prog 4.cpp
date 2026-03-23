#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    int id;
    char name[NAME_LENGTH];
    float grade;
} Student;

void addStudent(Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("\nStudent list is full!\n");
        return;
    }

    printf("\nEnter student ID: ");
    scanf("%d", &students[*count].id);
    
    printf("Enter student name: ");
    scanf(" %[^/n]",students[*count].name);

    printf("Enter student grade: ");
    scanf("%f", &students[*count].grade);

    (*count)++;
    printf("\nStudent added successfully!\n");
}

void viewStudents(Student students[], int count) {
    if (count == 0) {
        printf("\nNo students to display.\n");
        return;
    }

    printf("\nID\tName\t	Grade\n");
    printf("----------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n", students[i].id, students[i].name, students[i].grade);
    }
}

void searchStudent(Student students[], int count) {
    if (count == 0) {
        printf("\nNo students to search.\n");
        return;
    }

    int id;
    printf("\nEnter student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("\nStudent found:\n");
            printf("ID: %d\nName: %s\nGrade: %.2f\n", students[i].id, students[i].name, students[i].grade);
            return;
        }
    }

    printf("\nStudent with ID %d not found.\n", id);
}

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("\nStudent Information System\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                viewStudents(students, count);
                break;
            case 3:
                searchStudent(students, count);
                break;
            case 4:
                printf("\nExiting the program. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
