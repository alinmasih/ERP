#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(char value)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void preorder(struct Node *root)
{
    if (root == NULL)
        return;
    printf("%c ", root->data);
    preorder(root->left);
    prerder(root->right);
}

int main()
{
    struct Node *root = createNode('A');

    root->left = createNode('B');
    root->right = createNode('C');
    root->left->left = createNode('D');
    root->left->right = createNode('E');
    root->right->left = createNode('F');
    root->right->right = createNode('G');

    printf("Preorder Traversal: ");
    preorder(root);

    return 0;

}