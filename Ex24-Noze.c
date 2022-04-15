#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, m;printf("Nhap vao hang va cot: "); scanf("%d%d", &n, &m);
    int **matrix = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(m * sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sumDiagMain = 0, sumDiagSub = 0;
    for (int i = 0; i < n; i++) {
        sumDiagMain += matrix[i][i];
        sumDiagSub += matrix[i][m - 1 - i];
    }
    printf("Tong cua duong cheo chinh: %d\n", sumDiagMain);
    printf("Tong cua duong cheo phu: %d\n", sumDiagSub);
    return 0;
}