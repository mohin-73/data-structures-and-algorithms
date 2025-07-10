#include <stdio.h>
#include <stdbool.h>

void print_array(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int t = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[t] > arr[j]) {
                t = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[t];
        arr[t] = temp;
    }
}

int main(void) {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1) return 0;

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);
    printf("Sorted Array: ");
    print_array(arr, n);

    return 0;
}
