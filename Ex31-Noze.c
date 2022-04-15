#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int countNumber(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int sumNumber(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int x; printf("Nhap vao so x: "); scanf("%d", &x);
    printf("So chu so cua x la: %d\n", countNumber(x));
    printf("Tong cac chu so cua x la: %d\n", sumNumber(x));
    return 0;
}