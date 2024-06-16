#include <stdio.h>
#include <stdlib.h>

// Definition of the ListNode structure
struct ListNode {
    int val;              // Value of the node
    struct ListNode* next; // Pointer to the next node
};

int main() {
    // Allocate memory for the head node and set its value
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 1;

    // Allocate memory for the second node and set its value
    head->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->val = 2;

    // Allocate memory for the third node and set its value
    head->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->val = 3;

    // Allocate memory for the fourth node and set its value
    head->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->val = 5;

    // Allocate memory for the fifth node and set its value
    head->next->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->next->val = 8;

    // Set the next pointer of the fifth node to NULL (end of the list)
    head->next->next->next->next->next = NULL;

    // Count the number of nodes in the list directly in the main function
    int count = 0;                   // Initialize count to 0
    struct ListNode* current = head; // Start with the head of the list
    while (current != NULL) {        // Traverse until the end of the list
        count++;                     // Increment the count for each node
        current = current->next;     // Move to the next node
    }

    // Print the result
    printf("Number of nodes: %d\n", count);

    // Free the allocated memory for each node to avoid memory leaks
    current = head; // Start with the head of the list again
    struct ListNode* next;           // Pointer to hold the next node
    while (current != NULL) {        // Traverse until the end of the list
        next = current->next;        // Save the next node
        free(current);               // Free the current node
        current = next;              // Move to the next node
    }

    return 0; // Return 0 to indicate successful execution
}


// comments are added for self understanding purpose
