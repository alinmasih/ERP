#include <stdio.h>
#include <stdlib.h>

int main() {

    int s, d;

    printf("enter s and d: ");
    scanf("%d %d", &s, &d);

    int arr[d];

    int rem = d;

    for(int i = 0; i < d; i++) {

        int a = s / rem;

        arr[i] = a;

        s -= a;

        rem--;
    }

    for(int i = 0; i < d; i++) {
        printf("%d", arr[i]);
    }

    return 0;
}