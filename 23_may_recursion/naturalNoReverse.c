#include <stdio.h>

int nat(int x){
    if(x==0){
        return 0;
    }
    else{
        (nat(x-1));
        printf("%d ",x);
    }
    
}
int main(){
    int n;
    printf("enter no: ");
    scanf("%d",&n);
    nat(n);
}