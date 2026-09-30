#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

struct Node {
int data;
struct Node* left;
struct Node* right;
};

struct Queue {
int front;
int rear;
struct Node* array[MAX_QUEUE_SIZE];
};

struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}

struct Queue* createQueue() {
struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
q->front = 0;
q->rear = 0;
return q;
}

int isEmpty(struct Queue* q) {
return q->front == q->rear;
}

void enqueue(struct Queue* q, struct Node* node) {
if (q->rear < MAX_QUEUE_SIZE) {
q->array[q->rear++] = node;
}
}

struct Node* dequeue(struct Queue* q) {
if (isEmpty(q)) {
return NULL;
}
return q->array[q->front++];
}  

void levelOrderTraversal(struct Node* root) {
if (root == NULL) return;  

struct Queue* q = createQueue();
enqueue(q, root);

while (!isEmpty(q)) {
    struct Node* current = dequeue(q);
    printf("%d ", current->data);

    if (current->left != NULL) {
        enqueue(q, current->left);
    }

    if (current->right != NULL) {
        enqueue(q, current->right);
    }
}

free(q);
}

int main() {
struct Node* root = createNode(1);
root->left = createNode(2);
root->right = createNode(3);
root->left->left = createNode(4);
root->left->right = createNode(5);
root->right->right = createNode(6);

levelOrderTraversal(root);
printf("\n");

return 0;
}