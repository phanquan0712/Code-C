#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int Calculate(int n) {
    int sum = 1;
    if(n % 2 == 0) {
        for(int i = 2; i <= n; i+=2) {
            sum*=i;
        }
    }
    else {
        for(int i = 1; i <= n; i+=2) {
            sum*=i;
        }
    }
    return sum;
}

int main() {
    int n;printf("Nhap vao so nguyen n: ");scanf("%d", &n);
    int res = Calculate(n);
    printf("Ket qua: %d", res);
    return 0;
}