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
    printf("enter the no of minutes: ");
    scanf("%d",&x);
    printf("enter the no of algo: ");
    scanf("%d",&n);
    int a[n];
    printf("enter time required for each algo: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    Sort(a, n);
    for(int i=0; i<n; i++){
           if(a[i]<x){
            count++;
            x=x-a[i];
        }  1
    }                                                                                           

    printf("the no of algo learn is: %d",count);

    
    
}