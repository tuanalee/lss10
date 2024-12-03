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

int main() {
    int arr[MAX_SIZE] = {64, 34, 25, 12, 22, 11, 90}; 
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

    return 0;
}
