#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"

void run_menu_queue();
void run_menu_stack();

int main() {
    int option;
    do {
        printf("\n--- MAIN MENU ---\n");
        printf("[1] - Queue\n");
        printf("[2] - Stack\n");
        printf("[0] - Exit\n");
        printf("Option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                run_menu_queue();
                break;
            case 2:
                run_menu_stack();
                break;
        }
    } while (option != 0);

   return 0;
}

void run_menu_queue() {
    int option;
    Queue q;
    init_queue(&q);
    do {
        printf("\n--- QUEUE MENU ---\n");
        printf("\n[1] - Enqueue\n[2] - Dequeue\n[3] - Clear\n[4] - List\n[0] - Back\n");
        printf("Option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: {
                int value;
                printf("Value: ");
                scanf("%d", &value);
                enqueue(&q, value);
                list_queue(&q);
                break;
            }
            case 2:
                dequeue(&q);
                list_queue(&q);
                break;
            case 3:
                clear_queue(&q);
                list_queue(&q);
                break;
            case 4:
                list_queue(&q);
                break;
        }
    } while (option != 0);
}

void run_menu_stack() {
    int option;
    Stack s;
    init_stack(&s);

    do {
        printf("\n--- STACK MENU ---\n");
        printf("\n[1] - Push\n[2] - Pop\n[3] - Clear\n[4] - List\n[0] - Back\n");
        printf("Option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: {
                int value;
                printf("Value: ");
                scanf("%d", &value);
                push(&s, value);
                list_stack(&s);
                break;
            }
            case 2:
                pop(&s);
                list_stack(&s);
                break;
            case 3:
                clear_stack(&s);
                list_stack(&s);
                break;
            case 4:
                list_stack(&s);
                break;
        }
    } while (option != 0);
}