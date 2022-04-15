#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    int n, m; printf("Nhap vao hang va cot: "); scanf("%d %d", &n, &m);
    float matrix[n][m];
    printf("Nhap vao ma tran: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    float sumVien = 0, sumCheoChinh = 0, sumCheoPhu = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i == 0 || i == n- 1 || j == 0 || j == m- 1) {
                sumVien += matrix[i][j];
            }
            if(i == j) {
                sumCheoChinh += matrix[i][j];
            }
            if(i + j == n- 1) {
                sumCheoPhu += matrix[i][j];
            }
        }
    }
    printf("\n");
    printf("Sum vien: %f", sumVien);
    printf("\n");
    printf("Sum cheo chinh: %f", sumCheoChinh);
    printf("\n");
    printf("Sum cheo phu: %f", sumCheoPhu);
    return 0;
}