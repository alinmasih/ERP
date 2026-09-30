#include <stdio.h>

int main (){
    int s,d,n,sum=0,g=0;
    printf("enter s and d ");
    scanf("%d %d",&s,&d);
    for(int i=0; i<d; i++){
        if(i==0){
            n=1;
        }
        else{
            n=n*10;
        }
    }
    printf("before while");
    while(sum!=s){
        n++;
        g=n;
        for(int i=0; i<d;i++){
            sum=sum+g%10;
            g=g/10;
        } 
        printf("after while");
    }
    
    printf("%d",n);
    return 0;
}