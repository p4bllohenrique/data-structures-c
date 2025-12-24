#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {

    int option;
    Queue q;
    init_queue(&q);

    do
    {
        printf("\nChoose an option: \n");
        printf("[1] - Enqueue\n");
        printf("[2] - Dequeue\n");
        printf("[3] - Clear queue\n");
        printf("[4] - List queue\n");
        printf("[0] - Exit\n");
        printf("\nOption: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1: {
            int value;
            printf("\nEnter a value: ");
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
        case 0:
            break;
        default:
            break;
        }
    } while (option != 0);
    
    return 0;
}