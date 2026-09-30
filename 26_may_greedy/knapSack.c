#include <stdio.h>
int main(){

    int n;
    printf("enter the no of item: ");
    scanf("%d",&n);
    int w[n],p[n],v[i],temp;
    for(int i=0; i<n; i++){
        printf("enter profit and weight of item %d",i+1);
        scanf("%d %d",&w[i],&p[i]);
        v[i]=p[i]/w/[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n;j++)
        if(v[i]<v[j]){
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;

            temp=p[i];
            p[i]=p[j];
            p[j]=temp;

            temp=w[i];
            w[i]=w[j];
            w[j]=temp;
        } 
    }
}