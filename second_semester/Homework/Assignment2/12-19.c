#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode* createNode(int data) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

TreeNode* insertNode(TreeNode* root, int data, int* isDuplicate) {
    if (!root) 
        return createNode(data);

    if (data < root->data) {
        root->left = insertNode(root->left, data, isDuplicate);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data, isDuplicate);
    } else {
        *isDuplicate = 1;
    }
    return root;
}

void preorderTraversal(TreeNode* root) {
    if (root) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

int depth(TreeNode* root) {
    if (!root) 
        return 0;
    int l = depth(root->left);
    int r = depth(root->right);
    return l > r ? l + 1 : r + 1;
}

void freeTree(TreeNode* root) {
    if (root) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {

    while (1) {
        TreeNode* root = NULL;
        int value, ch;
        int duplicates[100], dupCount = 0;

        printf("輸入: ");
        while (scanf("%d", &value) == 1) {
            int isDup = 0;
            root = insertNode(root, value, &isDup);
            if (isDup) {
                duplicates[dupCount++] = value;
            }
            ch = getchar();
            if (ch == '\n' || ch == EOF) {
                break;
            }
        }

        if (feof(stdin)) {
            break;
        }

        printf("跳過重複值: ");
        for (int i = 0; i < dupCount; i++) {
            printf("%d ", duplicates[i]);
        }
        printf("\n");

        printf("樹的前序遍歷結果: ");
        preorderTraversal(root);
        printf("\n樹的深度: %d\n", depth(root));

        freeTree(root);
        printf("\n");
    }

    printf("\n程式結束\n");
    return 0;
}
