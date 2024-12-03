#include <stdio.h>

int main() {
    int arr[100], n, i, index;

    printf("Nhap so phan tu muon nhap: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        printf("Phan tu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can xoa: ");
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le\n");
        return 1;
    }

    for (i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Mang sau khi xoa: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

