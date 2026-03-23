#include <stdio.h>
#include <string.h>

FILE *proj;

int main() {
    char arr[100];  // Original data
    char res[100];  // Encrypted data
    char dep[100];  // Decrypted data
    char key[100];  // XOR key
    int op;

    // Input from user
    printf("Enter your data that you want to encrypt: ");
    scanf(" %[^\n]", arr);

    printf("Enter your private password (key): ");
    scanf(" %[^\n]", key);

    int keyLength = strlen(key);
    int dataLength = strlen(arr);

menu:
    printf("\n1. Encrypt the data\n");
    printf("2. Decrypt the data\n");
    printf("3. Exit\n");
    printf("Write your choice [1, 2, 3]: ");
    scanf("%d", &op);
    printf("\n");

    switch (op) {
        case 1:
            // Encrypt the data
            for (int i = 0; i < dataLength; i++) {
                res[i] = (arr[i] ^ key[i % keyLength]) + 32;
            }
            res[dataLength] = '\0';

            // Write encrypted data to file
            proj = fopen("./encrypted_data.txt", "w");
            if (proj != NULL) {
                fprintf(proj, "%s", res);
                fclose(proj);
                printf("Encrypted data written to 'encrypted_data.txt'.\n");
            } else {
                printf("Error opening file for writing.\n");
            }

            goto menu;

        case 2:
            // Read encrypted data from file
            proj = fopen("./encrypted_data.txt", "r");
            if (proj != NULL) {
                fgets(res, sizeof(res), proj);
                fclose(proj);
                printf("Encrypted data read from file: %s\n", res);
            } else {
                printf("Error opening file for reading.\n");
                goto menu;
            }

            // Decrypt the data
            for (int i = 0; i < dataLength; i++) {
                dep[i] = (res[i] - 32) ^ key[i % keyLength];
            }
            dep[dataLength] = '\0';

            // Write decrypted data to file
            proj = fopen("./decrypted_data.txt", "w");
            if (proj != NULL) {
                fprintf(proj, "%s", dep);
                fclose(proj);
                printf("Decrypted data written to 'decrypted_data.txt'.\n");
            } else {
                printf("Error opening file for writing.\n");
            }

            printf("Your decrypted data is: %s\n", dep);
            goto menu;

        case 3:
            printf("Thank you for your choice.\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
            goto menu;
    }

    return 0;
}