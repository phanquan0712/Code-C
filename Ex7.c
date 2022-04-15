#include<stdio.h>
#include<stdlib.h>
void arrangeArray(int *a, int n) {
    int i, j, temp;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n;printf("Nhap vao so phan tu trong day: ");scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Nhap vao day: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    arrangeArray(arr, n);
    printf("Day sau khi sap xep: ");
    for(int i = 0 ; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}