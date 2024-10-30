#include <stdio.h>

int main() {
    int N, minutes = 0, seconds = 0;

    printf("Enter the number of minutes: ");
    scanf("%d", &N);

    while (minutes < N) {
        printf("%02d : %02d\n", minutes, seconds);

        // Simulate a 1-second delay
        for (int i = 0; i < 1000000; i++) {
            // A simple loop to consume some CPU time
        }

        seconds++;
        if (seconds == 60) {
            seconds = 0;
            minutes++;
        }
    }

    printf("Stopwatch finished!\n");

    return 0;
}
