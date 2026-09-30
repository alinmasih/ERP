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

int main (){
    int n,k;
    printf("enter N and K: ");
    scanf("%d %d",&n, &k);
    int a[n];
    printf("enter price: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    Sort(a,n);
    int s=n-k;
    int min=0,max=0;
    for(int i=0; i<s;i++){
        min=min+a[i];
    }
    for(int i=n-1; i>s;i--){
        max=max+a[i];
    }
    printf("Min= %d and Max= %d",min,max);
    
                                         

}