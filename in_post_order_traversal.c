#include <stdio.h>
#include <stdlib.h>

// Definition of the TreeNode structure
struct TreeNode {
    int val; // Value of the node
    struct TreeNode* left; // Pointer to the left child
    struct TreeNode* right; // Pointer to the right child
};

// Function to perform inorder traversal of the tree
void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) { // If the current node is not null
        inorderTraversal(root->left); // Recurse on the left child
        printf("%d ", root->val); // Print the value of the current node
        inorderTraversal(root->right); // Recurse on the right child
    }
}

// Function to perform postorder traversal of the tree
void postorderTraversal(struct TreeNode* root) {
    if (root != NULL) { // If the current node is not null
        postorderTraversal(root->left); // Recurse on the left child
        postorderTraversal(root->right); // Recurse on the right child
        printf("%d ", root->val); // Print the value of the current node
    }
}

int main() {
    // Allocate memory for the root node and initialize its value
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = 3;
    
    // Allocate memory for the left child of the root and initialize its value
    root->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->left->val = 9;
    root->left->left = NULL; // No left child for this node
    root->left->right = NULL; // No right child for this node
    
    // Allocate memory for the right child of the root and initialize its value
    root->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->val = 20;
    
    // Allocate memory for the left child of the right node and initialize its value
    root->right->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->left->val = 15;
    root->right->left->left = NULL; // No left child for this node
    root->right->left->right = NULL; // No right child for this node
    
    // Allocate memory for the right child of the right node and initialize its value
    root->right->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->right->val = 7;
    root->right->right->left = NULL; // No left child for this node
    root->right->right->right = NULL; // No right child for this node
    
    // Perform and print inorder traversal
    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");
    
    // Perform and print postorder traversal
    printf("Postorder traversal: ");
    postorderTraversal(root);
    printf("\n");
    
    // Free the allocated memory
    free(root->left);
    free(root->right->left);
    free(root->right->right);
    free(root->right);
    free(root);
    
    return 0;
}
