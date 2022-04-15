#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int a, b; printf("Nhap vao 2 so: "); scanf("%d%d", &a, &b);
    if(a == 0) {
        if(b >= 0) {
            printf("Bat phuong trinh vo nghiem\n"); return 0;
        }
        else {
            printf("Bat phuong trinh co vo so nghiem\n"); return 0;
        }
    }
    else {
        printf("Bat phuong trinh co nghiem x <  %f\n", (float)-b/a); return 0;
    }
    return 0;
}