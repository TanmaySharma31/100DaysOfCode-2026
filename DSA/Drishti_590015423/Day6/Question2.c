#include <stdio.h>

void findUnion(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;
    int last = -1;  // Assumes array elements are non-negative

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            if (arr1[i] != last) {
                printf("%d ", arr1[i]);
                last = arr1[i];
            }
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            if (arr2[j] != last) {
                printf("%d ", arr2[j]);
                last = arr2[j];
            }
            j++;
        }
        else {
            if (arr1[i] != last) {
                printf("%d ", arr1[i]);
                last = arr1[i];
            }
            i++;
            j++;
        }
    }

    while (i < n1) {
        if (arr1[i] != last) {
            printf("%d ", arr1[i]);
            last = arr1[i];
        }
        i++;
    }

    while (j < n2) {
        if (arr2[j] != last) {
            printf("%d ", arr2[j]);
            last = arr2[j];
        }
        j++;
    }
}

int main() {
    int arr1[] = {1, 2};
    int arr2[] = {2, 3};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Union: ");
    findUnion(arr1, n1, arr2, n2);

    return 0;
}
