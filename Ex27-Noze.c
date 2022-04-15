#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>



int main() {
    int n; printf("Nhap vao so nguyen n: "); scanf("%d", &n);
    float a[n];
    printf("Nhap vao cac phan tu cua mang a: \n");
    for(int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }
    printf("In day: ");
    for(int i = 0; i < n; i++) {
        printf("%f ", a[i]);
    }

    return 0;
}