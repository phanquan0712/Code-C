#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int checkPerfectNumber(int n) {
    int sum = 1;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            sum += i;
            if(i != n/i) {
                sum += n/i;
            }
        }
    }
    if(sum == n) {
        return 1;
    }
    else {
        return 0;
    }
}


int main() {
    int n, m; printf("Nhap vao hang va cot: "); scanf("%d%d", &n, &m);
    int matrix[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    printf("Vi tri cac so hoan hao trong ma trang la: ");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(checkPerfectNumber(matrix[i][j])) {
                printf("(%d, %d) ", i, j);
                sum += matrix[i][j];
            }
        }
    }
    printf("\nTong cac so hoan hao: %d\n", sum);
    return 0;
}