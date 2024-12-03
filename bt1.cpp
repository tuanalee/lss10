#include <stdio.h>

int main() {
    int arr[] = {5, 12, 7, 3, 9, 15, 8}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int target;
    int found = 0; 

    
    printf("Mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);

   
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Phan tu %d ton tai trong mang tai vi tri: %d\n", target, i);
            found = 1; 
            break; 
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }

    return 0;
}
