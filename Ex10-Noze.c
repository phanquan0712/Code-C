#include<stdio.h>
#include<stdlib.h>


int main() {
    // a * x + b * y  = c
    // d * x + e * y  = f
    int a, b, c; printf("Nhap vao phuong trinh thu nhat: "); scanf("%d %d %d", &a, &b, &c);
    int d, e, f; printf("Nhap vao phuong trinh thu hai: "); scanf("%d %d %d", &d, &e, &f);
    int D = a * e - b * d;
    int D1 = c * e - f * b;
    int D2 = a * f - c * d;
    if(D == 0 ) {
        if(D1 + D2 == 0) {
            printf("Phuong trinh co vo so nghiem");
            return 0;
        }
        else {
            printf("Phuong trinh vo nghiem");
            return 0;
        }
    }
    else {
        printf("Phuong trinh co nghiem x = %f, y = %f",(float)D1 / D,(float)D2 / D);
        return 0;
    }
    return 0;
}