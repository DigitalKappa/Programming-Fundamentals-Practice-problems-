#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element, i;

    printf("Enter element to search: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            goto found;
        }
    }
    goto not_found;

found:
    printf("Element %d found at position %d.\n", element, i + 1);
    return 0;

not_found:
    printf("Element %d not found in the array.\n", element);
    return 0;
}