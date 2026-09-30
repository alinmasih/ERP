#include <stdio.h>

int main(){
    int n,k,profit=0;
    scanf("%d",&n);
    int price[n];
    for(int i=0; i<n; i++){
        scanf("%d",&price[i]);
    }
    printf("enter value of k: ");
    scanf("%d", &k);

    int buy,sell,maxProfit;
    buy=price[0];
    sell=price[0];

    for(int j=1; j<=k; j++){
        buy=price[0];
        sell=price[0];
        maxProfit=0;
        for(int i=1; i<n;i++){
            if(price[i]<buy){
                buy = price[i];
                sell=price[i];
            }
            if(price[i]>sell){
                sell=price[i];
            }
            if(sell-buy >maxProfit){
                maxProfit=sell-buy;
            }
        }
        profit += maxProfit;
        break;
    }
    printf("Maximum profit = %d",profit);
    return 0;

}