#include<stdio.h>
int sum(int n,int arr[]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int n1,n2,n3;

    printf("Enter The Number Of Elements IN Stack 1 : ");
    scanf("%d",&n1);
    printf("Enter The Number Of Elements IN Stack 2 : ");
    scanf("%d",&n2);
    printf("Enter The Number Of Elements IN Stack 3 : ");
    scanf("%d",&n3);

    int arr1[n1],arr2[n2],arr3[n3];

    for(int i=0;i<n1;i++){
        printf("Enter The Value Of %d : ",i);
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n2;i++){
        printf("Enter The Value Of %d : ",i);
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n3;i++){
        printf("Enter The Value Of %d : ",i);
        scanf("%d",&arr3[i]);
    }

    int s1,s2,s3;
    s1=sum(n1,arr1);
    s2=sum(n2,arr2);
    s3=sum(n3,arr3);

    int i=0,j=0,k=0;
    while(1){
        if(i==n1||j==n2||k==n3){
            printf("0");
            break;
        }
        else if(s1==s2 && s1==s3){
            printf("Equal Sum : %d",s1);
            break;
        }
        else if(s1>=s2 && s1>=s3){
            s1 -= arr1[i];
            i++;
        }
        else if(s2>=s1 && s2>=s3){
            s2 -= arr2[j];
            j++;
        }
        else {
            s3 -= arr3[k];
            k++;
        }
    }

}