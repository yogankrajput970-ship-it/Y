#include <stdio.h>

int main() {
    int i, marks[5], total = 0;
    float percentage;
    char subject[5][20];   // to store subject names

    // Input subject names and marks
    for (i = 0; i < 5; i++) {
        printf("Enter name of subject %d: ", i + 1);
        scanf("%s", subject[i]);

        printf("Enter marks for %s: ", subject[i]);
        scanf("%d", &marks[i]);

        total = total + marks[i];
    }

    // Calculate percentage
    percentage = (total / 500.0) * 100;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);

    // Grade calculation
    if (percentage >= 90 && percentage <= 100)
        printf("\nGrade: A");
    else if (percentage >= 80)
        printf("\nGrade: B");
    else if (percentage >= 60)
        printf("\nGrade: C");
    else
        printf("\nGrade: D");

    return 0;
}