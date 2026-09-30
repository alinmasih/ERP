#include <stdio.h>

int solve(int set[], int n, int target) {
    if (target == 0) {
        return 1;
    }
    if (n == 0) {
        return 0;
    }

    int include = solve(set, n - 1, target - set[n - 1]);
    int exclude = solve(set, n - 1, target);

    if (include == 1 || exclude == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int arr[6] = {3, 34, 4, 12, 5, 2};
    int target = 9;
    int n = 6;

    int result = solve(arr, n, target);

    if (result == 1) {
        printf("Found");
    } else {
        printf("Not found");
    }

    return 0;
}