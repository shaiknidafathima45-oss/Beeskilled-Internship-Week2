#include <stdio.h>

// Function to calculate the average
float calculateAverage(float marks[], int n) {
    float sum = 0;

    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    return sum / n;
}

int main() {
    int n;
    float marks[100], average;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    printf("Enter marks for %d subjects:\n", n);

    for (int i = 0; i < n; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    average = calculateAverage(marks, n);

    printf("\nStudent Average = %.2f\n", average);

    return 0;
}
