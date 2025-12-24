#include "stack.h"
#include <stdio.h>
#include <string.h>

void init_stack(Stack *s) {
    memset(s->data, 0, sizeof(s->data));
    s->top = 0;
}

int stack_is_empty(Stack *s) {
    return s->top == 0;

}

int stack_is_full(Stack *s) {
    return s->top == STACK_SIZE; 
}

void push(Stack *s, int value){
    if (stack_is_full(s)) {
        printf("Stack is full\n");
        return;
    }
    s->data[s->top++] = value;
}

int pop(Stack *s) {
    if (stack_is_empty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->data[--s->top];
}

void clear_stack(Stack *s) {
    memset(s->data, 0, sizeof(s->data));
    s->top = 0;
}

void list_stack(Stack *s) {
    printf("\n================== Current queue ==================\n");

    if (stack_is_empty(s)) {
        printf("Stack is empty\n");
        return;
    }

    for (int i = 0; i < s->top; i++) {
        printf("[%d] ", s->data[i]);
    }

    printf("\n");
}