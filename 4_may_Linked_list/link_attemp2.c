#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *nextPtr;
}*stNode;
struct node *fnNode;
struct node *temp;

void createNode(){
    stNode = (struct node*)malloc(sizeof(struct node));
    if(stNode==NULL) printf("no space");
    else{
        printf("enter data of first node ");
        scanf("%d",&stNode->num);
        stNode->nextPtr=NULL;
        printf("enter no of nodes you want ");
        int n;
        scanf("%d",&n);
        temp=stNode;
        for(int i =2; i<=n;i++){
            fnNode = (struct node*)malloc(sizeof(struct node));
            if(fnNode==NULL) printf("no space for more node");
            else{
                printf("enter data for next node ");
                scanf("%d",&fnNode->num);
                fnNode->nextPtr=NULL;
                temp->nextPtr=fnNode;
                temp=temp->nextPtr;;
            }
        }
    }
}

void display(){
    if(stNode==NULL) printf("no list exist ");
    else{
        temp=stNode;
        while(temp!=NULL){
            printf("data: %d\n",temp->num);
            temp= temp->nextPtr;
        }
    }
}

int main(){
    createNode();
    display();
}