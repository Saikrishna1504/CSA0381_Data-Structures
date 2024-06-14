#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* top = NULL;
    struct Node* temp;
    int choice, value;

    while (1) {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                temp = (struct Node*)malloc(sizeof(struct Node));
                if (!temp) {
                    printf("Heap overflow\n");
                    exit(1);
                }
                temp->data = value;
                temp->next = top;
                top = temp;
                printf("%d pushed to stack\n", value);
                break;

            case 2:
                if (top == NULL) {
                    printf("Stack underflow\n");
                } else {
                    temp = top;
                    top = top->next;
                    printf("Popped element: %d\n", temp->data);
                    free(temp);
                }
                break;

            case 3:
                if (top == NULL) {
                    printf("Stack is empty\n");
                } else {
                    temp = top;
                    printf("Stack elements are:\n");
                    while (temp != NULL) {
                        printf("%d\n", temp->data);
                        temp = temp->next;
                    }
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
