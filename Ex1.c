#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    printf("Nhap vao 3 so a, b, c: ");scanf("%d%d%d", &a, &b, &c);
    if(a == 0) {
        if(b == 0) {
            if(c == 0) {
                printf("Phuong trinh vo so nghiem!"); return 0;
            }
            else {
                printf("Phuong trinh vo nghiem!"); return 0;
            }
        }
        else {
            printf("Phuong trinh co nghiem x = %f", (float)-c/b); return 0;
        }
    }
    else {
        int delta = b*b - 4*a*c;
        if(delta < 0) {
            printf("Phuong trinh vo nghiem!"); return 0;
        }
        else if(delta == 0) {
            printf("Phuong trinh co nghiem kep x = %f", (float)-b/(2*a)); return 0;
        }
        else {
            printf("Phuong trinh co 2 nghiem phan biet x1 = %f, x2 = %f",(float)(-b + sqrt(delta))/(2*a),(float)(-b - sqrt(delta))/(2*a)); return 0;
        }
    }
    return 0;
}