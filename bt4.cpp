#include <stdio.h>

#define MAX_SIZE 100 


void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i; 
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; 
            }
        }
        \
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int arr[MAX_SIZE] = {64, 25, 12, 22, 11, 90, 34}; 
    int size = 7; 

   
    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    selectionSort(arr, size);

   
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
