#include <stdio.h>
void swap(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>=a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}

int main(){
    int n;
    printf("enter size of array ");
    scanf("%d",&n);
    int a[n];
    for(int i =0; i<n; i++){
        scanf("%d",&a[i]);
    }
    bubbleSort(a, n);
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        
    }
}