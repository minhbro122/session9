#include <stdio.h>

int main() {
    int arr[100], currentLength = 0, numElements, i, addValue, addIndex;

    printf("Nhap so phan tu muon nhap: ");
    scanf("%d", &numElements);

    if (numElements < 0 || numElements > 100) {
        printf("So phan tu khong hop le\n");
        return 1;
    }

    for (i = 0; i < numElements; i++) {
        printf("Phan tu %d: ", i);
        scanf("%d", &arr[i]);
    }
    currentLength = numElements;

    printf("Mang ban dau: ");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap gia tri can them: ");
    scanf("%d", &addValue);
    printf("Nhap vi tri can them: ");
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex >= 100) {
        printf("Vi tri khong hop le\n");
        return 1;
    }

    if (addIndex >= currentLength) {
        arr[addIndex] = addValue;
        currentLength = addIndex + 1;
    } else {
        for (i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }

    printf("Mang sau khi them: ");
    for (i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

