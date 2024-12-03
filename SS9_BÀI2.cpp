#include <stdio.h>

int main() {
    int arr[100], n, i, index, newValue;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can sua: ");
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    arr[index] = newValue;

    printf("Mang sau khi sua: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

