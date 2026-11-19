#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("queue overflow\n");
        return;
    }
    newNode -> data = value;
    newNode -> next = NULL;
    if(rear == NULL){
        front = rear = newNode;
    }
    else{
        rear -> next = newNode;
        rear = newNode;
    }
    rear -> next = front;
    printf("%d enqueued to queue\n",value);
}

void dequeue(){
    if(front == NULL){
        printf("Queue underflow\n");
        return;
    }
    struct Node *temp = front;
    printf("%d dequeued fron queue\n",front -> data);
    if(front == rear){
        front = rear = NULL;
    }
    else{
        front = front -> next;
        rear -> next = front;
    }
    free(temp);
}

void display(){
    if(front == NULL){
        printf("queue is empty\n");
        return;
    }
    struct Node *temp = front;
    printf("queue elements : ");
    do{
        printf("%d -> ",temp -> data);
        temp = temp ->next;
    }
    while(temp != front);
    printf("(back to front)\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}