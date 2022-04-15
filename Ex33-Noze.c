#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int CalculateS1(float x, int n) {
    if(n == 0) return 1;
    return pow(x, n) + CalculateS1(x, n - 1);
}

int main() {
    int n; printf("Nhap vao so n: "); scanf("%d", &n);
    float x; printf("Nhap vao so x: "); scanf("%f", &x);
    printf("S1(x, n) = %d\n", CalculateS1(x, n));
    return 0;
}