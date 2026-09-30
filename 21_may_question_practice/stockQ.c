#include <stdio.h>

int main(){
    int n;
    printf("enter no of days ");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n;i++){
        printf("enter stock value of day %d",i);
        scanf("%d",&a[i]);
    }
    int day_to_buy=a[0];
    int day_to_sell;
    int currrentP, maxP;
    for(int i =1; i<n; i++){
        if(day_to_buy>a[i]){
            day_to_buy=i;
        }
    }
    maxP=currrentP;
    for(int i =1; i<n; i++){
        currrentP=day_to_buy-a[i];
        if(maxP>currrentP){
            maxP=currrentP;
            day_to_sell=i;
        }
    }
    printf("max profit is %d and day to buy is %d, day to sell is %d",maxP,day_to_buy,day_to_sell);
    
    return 0;
}