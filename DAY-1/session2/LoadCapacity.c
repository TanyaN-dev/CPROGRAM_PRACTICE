#include <stdio.h>
#include <stdbool.h>

bool canShip(int weights[], int n, int d, int capacity) {
    int daysNeeded = 1;
    int currentLoad = 0;

    for (int i = 0; i < n; i++) {
        if (currentLoad + weights[i] > capacity) {
            daysNeeded++;
            currentLoad = 0;
        }
        currentLoad += weights[i];
    }

    return daysNeeded <= d;
}

int shipWithinDays(int weights[], int n, int days) {
    int maxWeight = 0;
    int totalWeight = 0;

    for (int i = 0; i < n; i++) {
        if (weights[i] > maxWeight) {
            maxWeight = weights[i];
        }
        totalWeight += weights[i];
    }

    int left = maxWeight;
    int right = totalWeight;
    int minCapacity = right;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (canShip(weights, n, days, mid)) {
            minCapacity = mid;
            right = mid - 1; 
        } else {
            left = mid + 1;  
        }
    }

    return minCapacity;
}

int main() {
    int weights[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(weights) / sizeof(weights[0]);
    int d = 5;

    printf("%d\n", shipWithinDays(weights, n, d));
    return 0;
}
