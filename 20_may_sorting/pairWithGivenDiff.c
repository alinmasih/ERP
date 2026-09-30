#include <stdio.h>

int main(){
    int n;
    printf("enter size of array ");
    scanf("%d",&n);
    int a[n];
    for(int i =0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int key;
    printf("enter the value of sum ");
    scanf("%d",&key);
    int sum;
    for(int i=0; i<n; i++){
        for(int j=1;j<n;j++){
            sum=a[i]+a[j];
            if(sum==key){
                printf("the values are %d and %d", a[i],a[j]);
            }
        }
    }
}