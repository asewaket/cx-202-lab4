#include <stdio.h>

int main() {
    int N, i = 1, j;

    printf("Enter the number of rows (N): ");
    scanf("%d", &N);

    while (i <= N) {
        j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
