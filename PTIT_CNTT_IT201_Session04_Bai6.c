#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[100];
    int age;
} student;

void inThongTin(student *std, int n, int id) {
    if (id < 1 || id > n) {
        printf("Sinh viên không tồn tại\n");
        return;
    }
    printf("id: %d, ", id);
    printf("name: %s, ", std[id - 1].name);
    printf("age: %d\n", std[id - 1].age);
}

int main() {
    printf("Nhập thông tin 5 sinh viên(mỗi sinh viên viết trên 1 dòng):\n");
    printf("id name age\n");
    int n = 5;
    student *std = (student*)malloc(n * sizeof(student));
    if (std == NULL) {
        printf("Khong the cap phat bo nho\n");
        return 1;
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &std[i].id);
        scanf("%s", std[i].name);
        scanf("%d", &std[i].age);
    }
    int id;
    scanf("%d", &id);
    inThongTin(std, n, id);
    free(std);
    return 0;
}