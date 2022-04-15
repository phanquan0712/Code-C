#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int n; printf("Nhap vao so n: "); scanf("%d", &n);
    int a[n];
    printf("Nhap vao day so: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int sum = 0, count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 3 == 0) {
            sum += a[i];
            count++;
        }
    }
    printf("Trung binh cong cac phan tu chia het cho 3 la: %f", (float)sum/count);
    return 0;
}