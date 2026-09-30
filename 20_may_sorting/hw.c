#include <stdio.h>

int main() {
    int n;
    printf("enter size of array ");
    scanf("%d", &n);
    
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int max_so_far = a[0];
    int current_max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > current_max + a[i]) {
            current_max = a[i];
        } else {
            current_max = current_max + a[i];
        }

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }

    printf("Maximum subarray sum is %d\n", max_so_far);

    return 0;
}