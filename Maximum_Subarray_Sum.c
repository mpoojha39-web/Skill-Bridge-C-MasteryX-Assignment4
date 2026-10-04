#include <stdio.h>

int main() {
    int arr[100], n, i;
    int currentSum, maxSum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    currentSum = arr[0];
    maxSum = arr[0];

    for (i = 1; i < n; i++) {
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of contiguous subarray: %d\n", maxSum);

    return 0;
}