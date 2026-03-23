#include <stdio.h>
#include <unistd.h> // For sleep function

int main() {
    int seconds;

    printf("Enter the number of seconds for countdown: ");
    scanf("%d", &seconds);

    for (int i = seconds; i >= 0; i--) {
        printf("%d seconds remaining\n", i);
        sleep(1); // Wait for 1 second
    }

    printf("Countdown finished!\n");
    return 0;
}