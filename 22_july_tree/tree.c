#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode (int value){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->left= NULL;
    newNode->right=NULL;
    return newNode;
}
int main (){
    struct node* root = createNode(10);
    root->left= createNode(40);
    root->right = createNode(50);
    printf("%d\n",root->data);
    printf("%d\n",root->left->data);
    printf("%d\n",root->right->data);
}