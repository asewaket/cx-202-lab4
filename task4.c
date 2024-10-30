#include <stdio.h>

int main() {
    int population[10];
    int i, max, min, sum = 0;

    // Input population of 10 cities
    printf("Enter the population of 10 cities:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &population[i]);
    }

    // Print population in reverse order
    printf("\nPopulation in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d\n", population[i]);
    }

    // Find maximum and minimum population
    max = population[0];
    min = population[0];
    for (i = 1; i < 10; i++) {
        if (population[i] > max) {
            max = population[i];
        }
        if (population[i] < min) {
            min = population[i];
        }
        sum += population[i];
    }

    // Print maximum and minimum population
    printf("\nMaximum population: %d\n", max);
    printf("Minimum population: %d\n", min);

    // Calculate and print average population
    int average = sum / 10;
    printf("\nAverage population: %d\n", average);

    return 0;
}
