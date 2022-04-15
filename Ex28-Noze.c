#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct PhanSo {
    int tu, mau;
};
typedef struct PhanSo PhanSo;

PhanSo nhapPhanSo() {
    PhanSo p;
    printf("Nhap vao tu so: "); scanf("%d", &p.tu);
    printf("Nhap vao mau so: "); scanf("%d", &p.mau);
    return p;
}

void inPhanSo(PhanSo p) {
    printf("%d/%d", p.tu, p.mau);
}

PhanSo SumPs(PhanSo a, PhanSo b) {
    PhanSo c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;
    return c;
}

PhanSo multiPs(PhanSo a, PhanSo b) {
    PhanSo c;
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
    return c;
}

int main() {
    PhanSo ps, ps1;
    printf("Nhap vao phan so ps: \n "); ps = nhapPhanSo();
    printf("Nhap vao phan so ps1: \n"); ps1 = nhapPhanSo();
    printf("Tong 2 phan so: "); inPhanSo(SumPs(ps, ps1));
    printf("\nTich 2 phan so: "); inPhanSo(multiPs(ps, ps1));
    return 0;
}