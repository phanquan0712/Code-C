#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


int main() {
    int n; printf("Nhap vao so luong phan tu trong mang : "); scanf("%d", &n);
    int arr[n];
    printf("Nhap vao mang: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("So nguyen chan trong mang: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\nSo nguyen le trong mang: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}