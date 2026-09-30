//sort in waveform
#include <stdio.h>
void swap(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
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
    for(int i=0; i<n-1; i+=2){
        int temp= a[i];
        a[i]=a[i+1];
        a[i+1]=a[i];
    }
    printf("the waveform is ");
    for(int i =0; i<n; i++){
        printf("%d ",a[i]);
    }
}