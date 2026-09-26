#include <stdio.h>

int minJumps(int nums[], int n) {
    if (n <= 1) return 0;

    int maxReach = 0;
    int jumps = 0;
    int currentEnd = 0;

    for (int i = 0; i < n - 1; i++) {
        if (i + nums[i] > maxReach) {
            maxReach = i + nums[i];
        }

        // When reaching the end of the current jump range
        if (i == currentEnd) {
            jumps++;
            currentEnd = maxReach;

            // If we can already reach the last index
            if (currentEnd >= n - 1) {
                break;
            }
        }
    }

    return jumps;
}

int main() {
    int nums[] = {2, 3, 4, 1, 1, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int jumps = minJumps(nums, n);
    printf("Minimum jumps needed: %d\n", jumps);

    return 0;
}
