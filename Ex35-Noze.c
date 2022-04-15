#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int a, b, c; printf("Nhap vao 3 so: "); scanf("%d%d%d", &a, &b, &c);
    if(a == 0) {
        if(b == 0) {
            if(c == 0) {
                printf("Phuong trinh co vo so nghiem\n"); return 0;
            }
            else {
                printf("Phuong trinh vo nghiem\n"); return 0;
            }
        }
        else {
            printf("Phuong trinh co nghiem x = %f\n", (float)-c/b); return 0;
        }
    }
    else {
        int delta = b * b - 4 * a * c;
        if(delta < 0) {
            printf("Phuong trinh vo nghiem\n"); return 0;
        }
        else if(delta == 0) {
            printf("Phuong trinh co nghiem kep x = %f\n", (float)-b/(2*a)); return 0;
        }
        else {
            printf("Phuong trinh co 2 nghiem phan biet x1 = %f, x2 = %f\n", (float)(-b - sqrt(delta))/(2*a), (float)(-b + sqrt(delta))/(2*a)); return 0;
        }
    }
    return 0;
}