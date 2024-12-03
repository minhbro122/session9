#include <stdio.h>

int main() {
    int arr[100], n = 0, choice, i, index, value;

    do {
        printf("\nMENU\n1. Nhap mang\n2. Hien thi\n3. Them\n4. Sua\n5. Xoa\n6. Thoat\nChon: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so phan tu: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++) scanf("%d", &arr[i]);
        } 
        else if (choice == 2) {
            for (i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
        } 
        else if (choice == 3) {
            printf("Nhap gia tri va vi tri: ");
            scanf("%d %d", &value, &index);
            if (index < 0 || index > n) printf("Vi tri khong hop le\n");
            else {
                for (i = n; i > index; i--) arr[i] = arr[i - 1];
                arr[index] = value;
                n++;
            }
        } 
        else if (choice == 4) {
            printf("Nhap vi tri va gia tri moi: ");
            scanf("%d %d", &index, &value);
            if (index < 0 || index >= n) printf("Vi tri khong hop le\n");
            else arr[index] = value;
        } 
        else if (choice == 5) {
            printf("Nhap vi tri can xoa: ");
            scanf("%d", &index);
            if (index < 0 || index >= n) printf("Vi tri khong hop le\n");
            else {
                for (i = index; i < n - 1; i++) arr[i] = arr[i + 1];
                n--;
            }
        }
    } while (choice != 6);

    return 0;
}

