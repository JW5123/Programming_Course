#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* data;
    int top;
} Stack;

void initStack(Stack* s) {
    s->top = -1;
}

void push(Stack* s, int val) {
    s->data[++(s->top)] = val;
}

void pop(Stack* s) {
    if (s->top >= 0) s->top--;
}

int top(Stack* s) {
    return s->data[s->top];
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    *returnSize = nums1Size;

    int* res = (int*)malloc(nums1Size * sizeof(int));

    int* nextGreater = (int*)malloc(nums2Size * sizeof(int));
    Stack st;
    initStack(&st);

    for (int i = nums2Size - 1; i >= 0; i--) {
        while (!isEmpty(&st) && nums2[i] > top(&st)) {
            pop(&st);
        }
        if(isEmpty(&st)) {
            nextGreater[i] = -1;
        } else {
            nextGreater[i] = top(&st);
        }
        // nextGreater[i] = isEmpty(&st) ? -1 : top(&st);
        push(&st, nums2[i]);
    }

    for (int i = 0; i < nums1Size; i++) {
        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                res[i] = nextGreater[j];
                break;
            }
        }
    }

    return res;
}

int main() {
    int nums1[100], nums2[100];
    int nums1Size = 0, nums2Size = 0;

    while (scanf("%d", &nums1[nums1Size]) == 1) {
        nums1Size++;
        if (getchar() == '\n') 
            break;
    }

    while (scanf("%d", &nums2[nums2Size]) == 1) {
        nums2Size++;
        if (getchar() == '\n') 
            break;
    }

    int returnSize;
    int* result = nextGreaterElement(nums1, nums1Size, nums2, nums2Size, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
        if (i < returnSize - 1) {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}
