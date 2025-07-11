#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_array(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        bool flag = true;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false;
            }
        }
        if (flag) break;
    }
}

int main(void) {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);
    printf("Sorted Array: ");
    print_array(arr, n);

    free(arr);

    return 0;
}
