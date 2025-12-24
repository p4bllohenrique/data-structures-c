#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_SIZE 10

typedef struct {
    int data[QUEUE_SIZE];
    int head;
    int tail;
} Queue;

void init_queue(Queue *q);
int is_empty(Queue *q);
int is_full(Queue *q);
void enqueue(Queue *q, int value);
int dequeue(Queue *q);
void clear_queue(Queue *q);
void list_queue(Queue *q);

#endif