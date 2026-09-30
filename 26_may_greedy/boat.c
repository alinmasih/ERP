#include <stdio.h>
void swap(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void Sort(int a[], int n){
    for(int i =0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
int main(){
    int n,x,count=0;
    printf("enter boat capacity : ");
    scanf("%d",&x);
    printf("enter no of people to save: ");
    scanf("%d",&n);
    int w[n];
    printf("enter weight of each passanger: ");
    for(int i=0; i<n; i++){
        scanf("%d",&w[i]);
    }
    Sort(w, n);
    for(int i=0; i<n; i++){
        
        int BW=x;
        for(int j=0; j<n; j++){
            int p=0;
            if(p<=2){
            if(w[i]==BW){
                count++;
            }
            else if(BW==0){
                count++;
            }
            else{
                BW=BW-w[i];
                p++;
            }
        }
        }
        

    }                                                                                           

    printf("the no of algo learn is: %d",count);

    
    
}