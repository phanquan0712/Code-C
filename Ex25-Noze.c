#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main() {
    char hoTen[50], ngaySinh[50];
    int hsLuong, luongCB;
    printf("Nhap vao ho ten: ");fflush(stdin);gets(hoTen);
    printf("Nhap vao ngay sinh: ");fflush(stdin);gets(ngaySinh);
    printf("Nhap vao he so luong: ");scanf("%d", &hsLuong);
    printf("Nhap vao luong co ban: ");scanf("%d", &luongCB);
    int tienThucLinh = luongCB, tienThuong = 0;
    if(hsLuong > 6) {
        tienThuong += 100000;
        tienThucLinh += 100000;
    }
    else if(hsLuong >=5 && hsLuong < 6) {
        tienThuong += 70000;
        tienThucLinh += 70000;
    }
    else {
        tienThuong += 50000;
        tienThucLinh += 50000;
    }
    printf("Ho ten: %s\n", hoTen);
    printf("Ngay sinh: %s\n", ngaySinh);
    printf("He so luong: %d\n", hsLuong);
    printf("Luong co ban: %d\n", luongCB);
    printf("Tien thuong: %d\n", tienThuong);
    printf("Tien Thuc Linh: %d", tienThucLinh);
    return 0;
}