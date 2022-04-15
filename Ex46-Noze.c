#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


float sumCol(float matrix[][100], int row, int col) {
    float sum = 0;
    for(int i = 0; i < row; i++) {
        sum += matrix[i][col];
    }
    return sum;
}

int main() {
    int n, m; printf("Nhap vao hang va cot: "); scanf("%d %d", &n, &m);
    float matrix[n][m];
    printf("Nhap vao ma tran: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    printf("\n");
    float maxSumCol = sumCol(matrix, n, 0);
    for(int i = 0; i < m; i++) {
        printf("%f ", sumCol(matrix, n, i));
        if(sumCol(matrix, n, i) > maxSumCol) {
            maxSumCol = sumCol(matrix, n, i);
        }
    }
    printf("\n");
    printf("Max sum col: %f", maxSumCol);
    return 0;
}