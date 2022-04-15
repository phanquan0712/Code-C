#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

struct PhanSo {
    int tuso, mauso;
};
typedef struct PhanSo PhanSo;

PhanSo inputPhanSo() {
    PhanSo ps;
    printf("Nhap vao tu so: ");scanf("%d", &ps.tuso);
    printf("Nhap vao mau so: ");scanf("%d", &ps.mauso);
    return ps;
}

int gcd(int a, int b) {
    if(a == 0) return b;
    return gcd(b % a, a);
}

PhanSo rutGonPhanSo(PhanSo ps) {
    int gcd_ = gcd(ps.tuso, ps.mauso);
    ps.tuso /= gcd_;
    ps.mauso /= gcd_;
    return ps;
}

void printPhanSo(PhanSo ps) {
    printf("%d/%d", ps.tuso, ps.mauso);
}

int main() {
    PhanSo ps1 = inputPhanSo();
    ps1 = rutGonPhanSo(ps1);
    printf("Phan so sau khi rut gon: ");
    printPhanSo(ps1);
    return 0;
}