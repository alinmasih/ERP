#include <stdio.h>
void find(int a[], int n, int f){
    for(int i=0; i<n;i++){
        if(f==a[i]) {
            int find=a[i];
        }
    }
    return find;
}
int main (){
    int sum,n,count=0,tsum=0;
    printf("enter sum: ");
    scanf("%d",&sum);
    printf("enter no of coins: ");
    scanf("%d",&n);
    int a[n];
    printf("enter coins: ");
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n;i++){
       int gsum=sum;
        tsum=a[i];
        if(tsum==sum) count++;
        else {
            gsum=gsum-tsum;
            int f=find(a,n,gsum);
            if(f+tsum==sum){
                count++;
            }
        }
    }
    printf("the count is: %d",count);


}