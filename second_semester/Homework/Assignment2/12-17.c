#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct TreeNode {
    char *data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

TreeNode *createNode(char *word) {
    TreeNode *node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = word;
    node->left = NULL;
    node->right = NULL;
    return node;
}

TreeNode *insertNode(TreeNode *root, char *word) {
    if(!root) {
        return createNode(word);
    }

    if(strcmp(word, root->data) < 0) {
        root->left = insertNode(root->left, word);
    } else if(strcmp(word, root->data) > 0) {
        root->right = insertNode(root->right, word);
    }

    return root;
}

void preorder(TreeNode *root) {
    if(root) {
        printf("%s ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(TreeNode *root) {
    if(root) {
        inorder(root->left);
        printf("%s ", root->data);
        inorder(root->right);
    }
}

void postorder(TreeNode *root) {
    if(root) {
        postorder(root->left);
        postorder(root->right);
        printf("%s ", root->data);
    }
}

int main() {
    
    char word[MAX];
    TreeNode *root = NULL;

    while(fgets(word, MAX, stdin) != NULL) {
        strtok(word, "\n");
        char *token = strtok(word, " ");
        while(token != NULL) {
            root = insertNode(root, token);
            token = strtok(NULL, " ");
        }
        
        printf("前序遍歷: ");
        preorder(root);
        printf("\n中序遍歷: ");
        inorder(root);
        printf("\n後序遍歷: ");
        postorder(root);
        printf("\n");
    }


    return 0;
}