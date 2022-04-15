#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


int main() {
    char tenHangHoa[50]; printf("Nhap vao ten hang hoa: "); fflush(stdin), gets(tenHangHoa);
    int soLuong, donGia;
    printf("Nhap vao so luong: "); scanf("%d", &soLuong);
    printf("Nhap vao don gia: "); scanf("%d", &donGia);
    int tongTien = donGia * soLuong;
    float thanhTien = tongTien + (tongTien) * 10 / 100;
    printf("Ten hang hoa: %s\n", tenHangHoa);
    printf("So luong: %d\n", soLuong);
    printf("Don gia: %d\n", donGia);
    printf("Tong tien: %d\n", tongTien);
    printf("Thanh tien: %.2f\n", thanhTien);
    return 0;
}