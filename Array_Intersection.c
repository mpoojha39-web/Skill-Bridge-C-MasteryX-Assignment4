#include <stdio.h>

int main() {
    int arr1[100], arr2[100];
    int n1, n2, i, j, found;

    printf("Enter the number of elements in Array 1: ");
    scanf("%d", &n1);

    printf("Enter Array 1 elements:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the number of elements in Array 2: ");
    scanf("%d", &n2);

    printf("Enter Array 2 elements:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Intersection of the two arrays: ");

    for (i = 0; i < n1; i++) {
        found = 0;

        for (j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("%d ", arr1[i]);
    }

    return 0;
}