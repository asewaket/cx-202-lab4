#include <stdio.h>

int main() {
    int N, i, j;

    printf("Enter the number of rows (N): ");
    scanf("%d", &N);

    // Generate the right-aligned pyramid
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
