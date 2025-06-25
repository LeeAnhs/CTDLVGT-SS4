#include <stdio.h>
#include <stdlib.h>

void timDoiXung(int a[], int n) {
    int found = 0;
    for (int i = 0; i < n / 2; i++) {
        if (a[i] == a[n - 1 - i]) {
            printf("Cap doi xung: %d %d\n", a[i], a[n - 1 - i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co phan tu doi xung\n");
    }
}

int main() {
    int n;
    int *arr;
    printf("Nhap so phan tu cua mang: ");
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
    timDoiXung(arr, n);
    free(arr);
    return 0;
}