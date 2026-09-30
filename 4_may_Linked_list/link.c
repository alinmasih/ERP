#include <stdio.h>
#include <stdlib.h>

struct node{
    int num;
    struct node *nextPtr;
};

int main(){
    struct node *snNode;
    snNode = (struct node*)malloc(sizeof(struct node));
    if(snNode==NULL){
        printf("no space");
    }
    else{
        printf("enter data of first node ");
        scanf("%d",&snNode->num);
        snNode->nextPtr=NULL;
        printf("enter no of node want to create ");
        int n;
        scanf("%d",&n);
        struct node *temp;
        struct node *fnNode;
        temp = snNode;
        for(int i =2; i<=n; i++){
        fnNode = (struct node*)malloc(sizeof(struct node));
        if(fnNode==NULL){
            printf("no space");
        }
        else{
            printf("enter data of next node ");
            scanf("%d",&fnNode->num);
            fnNode->nextPtr=NULL;
            temp->nextPtr=fnNode;
            temp=temp->nextPtr;
        }
    }
    }

    
    
    if(snNode==NULL){
        printf("no list");
    }
    else{
        struct node *temp;
        temp=snNode;
        while(temp != NULL){
            printf("data = %d \n",temp->num);
            temp= temp->nextPtr;
        }
    }
}

    

