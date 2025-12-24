#include "queue.h"
#include <stdio.h>
#include <string.h>


void init_queue(Queue *q) {
    memset(q->data, 0, sizeof(q->data));
    q->head = 0;
    q->tail = 0;
}

int queue_is_empty(Queue *q) {
    return q->head == q->tail;
}

int queue_is_full(Queue *q) {
    return q->tail == QUEUE_SIZE;
}

void enqueue(Queue *q, int value) {
    if (queue_is_full(q)) {
        printf("Queue is full\n");
        return;
    }
    q->data[q->tail++] = value;
}

int dequeue(Queue *q) {
    if (queue_is_empty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->data[q->head++];
}

void clear_queue(Queue *q) {
    q->head = 0;
    q->tail = 0;
    memset(q->data, 0, sizeof(q->data));
}

void list_queue(Queue *q) {
    printf("\n================== Current queue ==================\n");

    if (queue_is_empty(q)) {
        printf("Queue is empty\n");
        return;
    }

    for (int i = q->head; i < q->tail; i++) {
        printf("[%d] ", q->data[i]);
    }

    printf("\n");
}