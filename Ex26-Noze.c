#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main() {
    int n; printf("Nhap vao so hang cua ma tran vuong: "); scanf("%d", &n);
    int A[n][n], B[n][n];
    printf("Nhap vao ma tran A: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Nhap vao ma tran B: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    int C[n][n];
    memset(C, 0, sizeof(C));
    // multiply matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}