#include <stdio.h>

int Do(int x){
    if(x>0){
        Do(x-1);
        printf("%d ",x);
        Do(x-1);
    }
}

int main(){
    Do(3);
    return 0;
}