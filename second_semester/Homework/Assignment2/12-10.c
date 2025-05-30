#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct Stack {
    char data;
    struct Stack *next;
} Stack;

void push(Stack **top, char data) {
    Stack *node = (Stack*)malloc(sizeof(Stack));
    node->data = data;
    node->next = *top;
    *top = node;
}

char pop(Stack **top) {
    if(*top == NULL) {
        return '\0';
    }

    Stack *temp = *top;
    char ch = temp->data;
    *top = temp->next;
    return ch;
}

int isEmpty(Stack *top) {
    return top == NULL;
}

int main() {

    char word[MAX];
    Stack *top = NULL;

    while(fgets(word, MAX, stdin) != NULL) {
        strtok(word, "\n");

        for(int i = 0; word[i] != '\0'; i++) {
            push(&top, word[i]);
        }

        printf("反轉後: ");
        while(!isEmpty(top)) {
            printf("%c", pop(&top));
        }
        printf("\n");
    }

    return 0;
}