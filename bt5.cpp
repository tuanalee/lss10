#include <stdio.h>

#define MAX_SIZE 100

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[MAX_SIZE] = {64, 25, 12, 22, 11, 90, 34};
    int size = 7;

    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, size);

    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int target;
    printf("Nhap mot so nguyen de tim kiem: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", target, result);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }

    return 0;
}
