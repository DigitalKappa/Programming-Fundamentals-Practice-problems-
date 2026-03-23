#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    int attempts = 3;

try_again:
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(password, "mypassword") == 0) {
        printf("Login successful!\n");
        return 0;
    } else {
        attempts--;
        if (attempts > 0) {
            printf("Incorrect password. You have %d attempts left.\n", attempts);
            goto try_again;
        } else {
            printf("Access denied. No attempts left.\n");
        }
    }

    return 0;
}