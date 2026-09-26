#include <stdio.h>

int minSpeed(int bunches[], int n, int h) {
    int left = 1;
    int right = 0;

    // 1. Find the maximum pile size for the upper bound
    for (int i = 0; i < n; i++) {
        if (bunches[i] > right) {
            right = bunches[i];
        }
    }

    int speed = right;

    // 2. Binary search for the minimum eating speed
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long totalHours = 0;

        for (int i = 0; i < n; i++) {
            // Integer ceiling division: ceil(bunches[i] / mid)
            totalHours += (bunches[i] + mid - 1) / mid;
        }

        if (totalHours <= h) {
            speed = mid;       // Valid speed, try to find a smaller one
            right = mid - 1;
        } else {
            left = mid + 1;    // Too slow, need higher speed
        }
    }

    return speed;
}

int main() {
    int bunches[] = {3, 6, 7, 11};
    int n = 4;
    int h = 8;

    printf("%d\n", minSpeed(bunches, n, h));
    return 0;
}

