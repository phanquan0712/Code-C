#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


float calculateS(int n) {
    if(n == 1) return 1;
    return (float)1/pow(n, 2) + calculateS(n-1);
}

int main() {
    int n; printf("Nhap vao so nguyen n: "); scanf("%d", &n);
    printf("S(%d) = %f", n, calculateS(n));
    return 0;
}