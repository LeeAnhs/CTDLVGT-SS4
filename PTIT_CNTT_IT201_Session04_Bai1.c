#include <stdio.h>
#include <stdlib.h>
	void timvitri(int a[], int n, int x) {
    	for (int i = 0; i < n; i++) {
        	if (a[i] == x) {
            	printf("%d\n",i);
            	return;
        }
    }
    printf("khong ton tai trong mang\n");
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
    printf("Nhap gia tri can tim: ");
    int x;
    scanf("%d", &x);
    timvitri(arr, n, x);
    free(arr);
    return 0;
}

