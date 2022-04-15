#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Calculate(int n) {
    if(n == 1) {
        return 1;
    }
    return pow(n, 2) + Calculate(n - 1);
}

int main() {
    int n;
    do{
        printf("Nhap vao so nguyen n: "); scanf("%d", &n);
    }while(n <= 0);
    printf("Ket qua: %d", Calculate(n));
    return 0;
}