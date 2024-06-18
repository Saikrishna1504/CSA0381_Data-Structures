#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j;

    // Input the size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    // Input elements of the first array
    printf("Enter elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    // Input elements of the second array
    printf("Enter elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the first array into the merged array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Merge the second array into the merged array
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Output the merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
