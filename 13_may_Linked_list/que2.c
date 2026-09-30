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
    printf("enter no of nodes you want ");
    int n;
    scanf("%d",&n);
    int k;
    printf("Enter the kth position: ");
    scanf("%d", &k);
    if(stNode==NULL) printf("no space");
    else{
        printf("enter data of first node ");
        scanf("%d",&stNode->num);
        stNode->nextPtr=NULL;
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
    struct node *temp1=stNode;
    struct node *temp2=stNode;
    for(int i=1; i<k; i++){
        temp1 = temp1 -> nextPtr;
    }
    for(int j=1; j<n - k + 1; j++){
        temp2 = temp2 -> nextPtr;
    }
    printf("temp1 = %d\n", temp1 -> num);
    printf("temp2 = %d\n", temp2 -> num);
    temp -> num = temp1 -> num;
    temp1 -> num = temp2 -> num;
    temp2 -> num = temp -> num;
    printf("temp1 = %d\n", temp1 -> num);
    printf("temp2 = %d\n", temp2 -> num);
}