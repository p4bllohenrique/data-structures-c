#ifndef STACK_H
# define STACK_H

#define STACK_SIZE 10

typedef struct {
    int data[STACK_SIZE];
    int top;
} Stack;

void init_stack(Stack *s);
int is_empty(Stack *s);
int is_full(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
void clear_stack(Stack *s);
void list_stack(Stack *s);

# endif