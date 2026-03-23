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

    // Write key to file
    proj = fopen("semester_project.txt", "w");
    if (proj != NULL) {
        fprintf(proj, "Key: %s\n", key);
        fclose(proj);
    } else {
        printf("Error opening file for writing.\n");
        return 1;
    }

code:
    printf("\n1. Want to Encrypt the data.\n");
code1:
    printf("2. Want to Decrypt the data.\n");
    printf("3. Exit.\n\n");
    printf("Write your choice [1,2,3]: ");
    scanf("%d", &op);
    printf("\n");

    switch (op) {
        case 1:
            // Encrypt the data
            for (int i = 0; i < dataLength; i++) {
                res[i] = (arr[i] ^ key[i % keyLength]) + 32;  // Shift to printable range
            }
            res[dataLength] = '\0';

            // Write encrypted data to file
            proj = fopen("semester_project.txt", "a");
            if (proj != NULL) {
                fprintf(proj, "Encrypted data: %s\n", res);
                fclose(proj);
                printf("Encrypted data written to file.\n");
            } else {
                printf("Error opening file for writing.\n");
            }

            printf("This is your encrypted data: %s\n", res);
            goto code1;

        case 2:
            // Read key from file
            proj = fopen("semester_project.txt", "r");
            if (proj != NULL) {
                fscanf(proj, "Key: %[^\n]\n", key);
                fclose(proj);
            } else {
                printf("Error opening file for reading.\n");
                return 1;
            }

            // Decrypt the data
            for (int i = 0; i < dataLength; i++) {
                dep[i] = (res[i] - 32) ^ key[i % keyLength];  // Shift back to original range
            }
            dep[dataLength] = '\0';

            // Write decrypted data to file
            proj = fopen("semester_project.txt", "a");
            if (proj != NULL) {
                fprintf(proj, "Decrypted data: %s\n", dep);
                fclose(proj);
                printf("Decrypted data written to file.\n");
            } else {
                printf("Error opening file for writing.\n");
            }

            printf("Your decrypted data is: %s\n", dep);
            goto code;

        case 3:
            printf("Thank you for your choice.\n");
            break;

        default:
            printf("Invalid choice...\n");
            printf("Don't worry, you can try again.\n");
            goto code;
    }

    return 0;
}
