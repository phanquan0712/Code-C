#include<stdio.h>


int main() {
    int n;printf("Nhap vao so n: ");scanf("%d", &n);
    int sum = 0, count = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
        count++;
    }
    printf("Tong cac chu so: %d\n", sum);
    printf("So chu so trong n : %d\n", count);
    return 0;
}