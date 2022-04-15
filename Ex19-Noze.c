#include<stdio.h>
#include<string.h>
#include<math.h>
int checkPerfectSquare(int n) {
    int sqr = sqrt(n);
    return (sqr * sqr == n) ? 1 : 0;
}

int main() {
    int n; printf("Nhap vao so luong phan tu: "); scanf("%d", &n);
    int a[n];
    printf("Nhap vao cac phan tu: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        if(checkPerfectSquare(a[i])) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}