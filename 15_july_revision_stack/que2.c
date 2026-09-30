2  minimum jump in array
#include <stdio.h>

int jump(int nums[], int n) {
    if (n <= 1)
        return 0;

    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for (int i = 0; i < n - 1; i++) {
                if (i + nums[i] > farthest)// Find the farthest index reachable

            farthest = i + nums[i];

               if (i == currentEnd) {   // End of current jump range

            jumps++;
            currentEnd = farthest;

           
            if (currentEnd >= n - 1)  // Stop if last index is reachable
                break;
        }
    }

    return jumps;
}

int main() {
    int n;

    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("%d\n", jump(nums, n));

    return 0;
}