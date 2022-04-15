#include<stdio.h>
#include<math.h>

int checkNumberPerfect(int n) {
    int sum = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    if(sum == n) {
        return 1;
    }
    return 0;
}

int main() {
    int n; printf("Nhap vao so luong phan tu: "); scanf("%d", &n);
    int a[n];
    printf("Nhap vao mang: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        if(checkNumberPerfect(a[i]) == 1) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}