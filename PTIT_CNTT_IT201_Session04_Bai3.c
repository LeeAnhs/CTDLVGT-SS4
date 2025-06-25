#include <stdio.h>
#include <stdlib.h>

    void findPos(int *arr, int n) {
        int max = arr[0];
        int pos = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] < max) {
                max = arr[i];
                pos = i;
            }
        }
        printf("vi tri:%d\n",pos);
    }

int main() {
    int n;
    int *arr;
    printf("Nhap so phan tu cua mang : ");
    scanf("%d", &n);
 
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findPos(arr, n);
    free(arr);
    return 0;


}

