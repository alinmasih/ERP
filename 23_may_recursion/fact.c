#include <stdio.h>

int rec(int x){
    if(x==1){
        return 1;
    }
    return x*rec(x-1);
}
int main(){
    int n;
    printf("enter no: ");
    scanf("%d",&n);
    int fact = rec(n);
    printf("%d \n",fact);

    return 0;
}