#include <stdio.h>

#define MAX_SIZE 100 


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

  
    bubbleSort(arr, size);

    
    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
