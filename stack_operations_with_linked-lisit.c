#include <stdio.h>
#include <stdlib.h>

// Define the structure for a stack node
struct Node {
    int data;           // Data to be stored in the node
    struct Node* next;  // Pointer to the next node in the stack
};

int main() {
    struct Node* top = NULL; // Initialize the top pointer of the stack to NULL (stack is empty)
    struct Node* temp;       // Temporary pointer for various operations
    int choice, value;       // Variables to store user's choice and the value to be pushed

    // Infinite loop to continuously display menu and process user input
    while (1) {
        // Display the menu options
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);  // Read the user's choice

        switch (choice) {
            case 1:  // Push operation
                printf("Enter the value to push: ");
                scanf("%d", &value);  // Read the value to be pushed onto the stack
                temp = (struct Node*)malloc(sizeof(struct Node));  // Allocate memory for the new node
                if (!temp) {  // Check if memory allocation was successful
                    printf("Heap overflow\n");  // If not, print error message
                    exit(1);  // Exit the program with an error status
                }
                temp->data = value;  // Assign the input value to the new node's data field
                temp->next = top;    // Point the new node's next to the current top node
                top = temp;  // Make the new node the top node of the stack
                printf("%d pushed to stack\n", value);  // Print confirmation
                break;

            case 2:  // Pop operation
                if (top == NULL) {  // Check if the stack is empty
                    printf("Stack underflow\n");  // If empty, print error message
                } else {
                    temp = top;  // Store the current top node in temp
                    top = top->next;  // Move the top pointer to the next node in the stack
                    printf("Popped element: %d\n", temp->data);  // Print the data of the popped node
                    free(temp);  // Free the memory of the popped node
                }
                break;

            case 3:  // Display operation
                if (top == NULL) {  // Check if the stack is empty
                    printf("Stack is empty\n");  // If empty, print message
                } else {
                    temp = top;  // Start from the top node
                    printf("Stack elements are:\n");
                    // Traverse the stack and print each element
                    while (temp != NULL) {
                        printf("%d\n", temp->data);  // Print the data of the current node
                        temp = temp->next;  // Move to the next node
                    }
                }
                break;
            case 4:  // Exit operation
                exit(0);  // Exit the program
            default:  // Invalid choice
                printf("Invalid choice\n");  // Print error message
        }
    }

    return 0;
}
