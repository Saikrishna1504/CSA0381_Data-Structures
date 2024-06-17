#include <stdio.h>  // Corrected the header file capitalization

int main() {
    int n, i, data, a[90];
    
    printf("no.of elmeents");  // Issue: Typo in message
    // Fix: printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("elements elmeents");  // Issue: Typo in message
    // Fix: printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("enter data to search");  // Issue: Typo in message
    // Fix: printf("Enter data to search: ");
    scanf("%d", &data);
    
    for(i = 0; i < n; i++) {
        if(a[i] == data) {
            printf("element founnd at index %d", i);  // Issue: Typo in message
            // Fix: printf("Element found at index %d\n", i);
            break;
        }
    }
    
    if(i == n) {
        printf("not dound");  // Issue: Typo in message and missing semicolon
        // Fix: printf("Element not found\n");
    }
    
    return 0;
}
