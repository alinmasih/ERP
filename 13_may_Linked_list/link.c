#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *nextPtr;
}*stNode;
struct node *fnNode;
struct node *temp;

void createNode(){
    
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
    stNode = (struct node*)malloc(sizeof(struct node));
    int n;
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
    int sum;
    struct node *temp1=stNode;
    struct node *temp2=stNode->nextPtr;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            
            sum = temp1->num + temp2->num;
            if(sum==10) printf("the nodes are %d and %d", i, j);
            else printf("error");
            temp2=temp2->nextPtr;
        }
        temp1=temp1->nextPtr;
    }
}