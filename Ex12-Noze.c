#include<stdio.h>

void inputMatrix(int a[][5], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void printMatrix(int a[][5], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void findMinInMatrix(int a[][5], int n, int m) {
    int min = a[0][0];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    printf("Min la: %d", min);
    printf("\n");
}

void CalculateSumOfMatrix(int a[][5], int n, int m) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    printf("Tong cac phan tu trong ma tran la: %d", sum);
    printf("\n");
}

int main() {
    int n, m; printf("Nhap vao hang va cot: "); scanf("%d %d", &n, &m);
    int arr[5][5];
    inputMatrix(arr, n, m);
    printMatrix(arr, n, m);
    findMinInMatrix(arr, n, m);
    CalculateSumOfMatrix(arr, n, m);
    return 0;
}