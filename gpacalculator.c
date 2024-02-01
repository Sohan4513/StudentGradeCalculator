#include <stdio.h>

float calculateGPA(int score) {
    if (score >= 93) return 4.0;
    else if (score >= 90) return 3.7;
    else if (score >= 87) return 3.3;
    else if (score >= 83) return 3.0;
    else if (score >= 80) return 2.7;
    else if (score >= 77) return 2.3;
    else if (score >= 73) return 2.0;
    else if (score >= 70) return 1.7;
    else if (score >= 67) return 1.3;
    else if (score >= 63) return 1.0;
    else if (score >= 60) return 0.7;
    else return 0.0;
}

int main() {
    printf("\n************************************************************\n");
    printf("*                                                          *\n");
    printf("*            Welcome to Student GPA Calculator             *\n");
    printf("*                                                          *\n");
    printf("************************************************************\n");

    printf("\nPlease enter student's name: ");
    char playerName[50];
    scanf("%s", playerName);

    printf("\nDo you want to calculate the GPA for a single class or for multiple classes?\n");
    printf("Enter '1' for a single class or '2' for multiple classes: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nEnter the grade percentage for the class: ");
        int grade;
        scanf("%d", &grade);

        float gpa = calculateGPA(grade);
        printf("\n%s's GPA for this class is: %.2f\n", playerName, gpa);
    } else if (choice == 2) {
        printf("\nEnter the number of classes: ");
        int numClasses;
        scanf("%d", &numClasses);

        float totalGPA = 0.0;
        for (int i = 1; i <= numClasses; i++) {
            printf("\nEnter the grade percentage for class %d: ", i);
            int grade;
            scanf("%d", &grade);

            totalGPA += calculateGPA(grade);
        }

        float overallGPA = totalGPA / numClasses;
        printf("\n%s's overall GPA for %d classes is: %.2f\n", playerName, numClasses, overallGPA);
    } else {
        printf("\nInvalid choice. Please run the program again.\n");
    }

    printf("\nThank you for using the Student GPA Calculator!\n");

    return 0;
}