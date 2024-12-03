#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE] = {64, 25, 12, 22, 11, 90, 34, 22, 11};
    int size = 9;
    int target;
    int positions[MAX_SIZE];
    int count = 0;

    printf("Mang: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap mot so nguyen de tim kiem: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            positions[count] = i;
            count++;
        }
    }

    if (count > 0) {
        printf("Phan tu %d duoc tim thay tai vi tri: ", target);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", target);
    }

    return 0;
}
