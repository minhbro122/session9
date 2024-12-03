#include <stdio.h>

int main() {
    int arr[100][100], rows, cols, choice, i, j, sum, product, maxRow, maxSum;

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu theo ma tran\n");
        printf("3. In cac phan tu le va tinh tong\n");
        printf("4. In cac phan tu tren duong bien va tinh tich\n");
        printf("5. In cac phan tu tren duong cheo chinh\n");
        printf("6. In cac phan tu tren duong cheo phu\n");
        printf("7. In dong co tong gia tri lon nhat\n");
        printf("8. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so dong: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        printf("Phan tu [%d][%d]: ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;

            case 2:
                printf("Ma tran:\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                sum = 0;
                printf("Cac phan tu le: ");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", sum);
                break;

            case 4:
                product = 1;
                printf("Cac phan tu tren duong bien: ");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            printf("%d ", arr[i][j]);
                            product *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n", product);
                break;

            case 5:
                printf("Cac phan tu tren duong cheo chinh: ");
                for (i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Cac phan tu tren duong cheo phu: ");
                for (i = 0; i < rows && i < cols; i++) {
                    printf("%d ", arr[i][cols - i - 1]);
                }
                printf("\n");
                break;

            case 7:
                maxRow = 0;
                maxSum = 0;
                for (i = 0; i < rows; i++) {
                    sum = 0;
                    for (j = 0; j < cols; j++) {
                        sum += arr[i][j];
                    }
                    if (sum > maxSum) {
                        maxSum = sum;
                        maxRow = i;
                    }
                }
                printf("Dong co tong lon nhat: %d (Tong: %d)\n", maxRow, maxSum);
                printf("Cac phan tu: ");
                for (j = 0; j < cols; j++) {
                    printf("%d ", arr[maxRow][j]);
                }
                printf("\n");
                break;

            case 8:
                printf("Thoat chuong trinh\n");
                break;

            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 8);

    return 0;
}

