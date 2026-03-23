#include <stdio.h>

int main() {
    float totalMarks, obtainedMarks, percentage;
    int gradeCategory;

    printf("Enter the total marks: ");
    scanf("%f", &totalMarks);

    printf("Enter the obtained marks: ");
    scanf("%f", &obtainedMarks);

    
    percentage = (obtainedMarks / totalMarks) * 100;

    
    gradeCategory = (int)(percentage / 10); 
    
    switch (gradeCategory) {
        case 10:
        case 9:
            printf("Grade: A (Excellent)\n");
            break;
        case 8:
            printf("Grade: B (Very Good)\n");
            break;
        case 7:
            printf("Grade: C (Good)\n");
            break;
        case 6:
            printf("Grade: D (Satisfactory)\n");
            break;
        case 5:
            printf("Grade: E (Needs Improvement)\n");
            break;
        default:
            printf("Grade: F (Fail)\n");
            break;
    }

    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}