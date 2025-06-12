#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode {
    int data;
    struct treeNode *leftPtr;
    struct treeNode *rightPtr;
} TreeNode;

typedef TreeNode *TreeNodePtr;

void insertNode(TreeNodePtr *treePtr, int value) {
    if (*treePtr == NULL) {
        *treePtr = malloc(sizeof(TreeNode));
        if (*treePtr != NULL) {
            (*treePtr)->data = value;
            (*treePtr)->leftPtr = NULL;
            (*treePtr)->rightPtr = NULL;
        } else {
            printf("%d not inserted. No memory available.\n", value);
        }
    } else {
        if (value < (*treePtr)->data) {
            insertNode(&((*treePtr)->leftPtr), value);
        } else if (value > (*treePtr)->data) {
            insertNode(&((*treePtr)->rightPtr), value);
        }
        // 若相等，略過
    }
}

void preOrder(TreeNodePtr treePtr) {
    if (treePtr != NULL) {
        printf("%d ", treePtr->data);
        preOrder(treePtr->leftPtr);
        preOrder(treePtr->rightPtr);
    }
}

void inOrder(TreeNodePtr treePtr) {
    if (treePtr != NULL) {
        inOrder(treePtr->leftPtr);
        printf("%d ", treePtr->data);
        inOrder(treePtr->rightPtr);
    }
}

void postOrder(TreeNodePtr treePtr) {
    if (treePtr != NULL) {
        postOrder(treePtr->leftPtr);
        postOrder(treePtr->rightPtr);
        printf("%d ", treePtr->data);
    }
}

int main(void) {
    TreeNodePtr rootPtr = NULL;
    int input;

    while (scanf("%d", &input) == 1 && input != -1) {
        insertNode(&rootPtr, input);
    }

    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("前序遍歷結果：");
            preOrder(rootPtr);
            break;
        case 2:
            printf("中序遍歷結果：");
            inOrder(rootPtr);
            break;
        case 3:
            printf("後序遍歷結果：");
            postOrder(rootPtr);
            break;
        default:
            printf("無效的選擇\n");
            break;
    }

    printf("\n");
    return 0;
}
