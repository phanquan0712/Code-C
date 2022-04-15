#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

float calculateS(int n) {
    if(n == 1) return 1;
    return (float)1/factorial(n) + calculateS(n-1);
}

int main() {
    int n; printf("Nhap vao so nguyen duong n: "); scanf("%d", &n);
    printf("S(%d) = %f\n", n, calculateS(n));
    return 0;
}