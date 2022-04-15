#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int checkIncreaseArray(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n; printf("Nhap vao so n: "); scanf("%d", &n);
    int a[n]; 
    printf("Nhap vao day so: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    if(checkIncreaseArray(a, n) == true) {
        printf("Day so tang dan\n");
    } else {
        printf("Day so khong tang dan\n");
    }
    return 0;
}