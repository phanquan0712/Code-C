#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


struct InforStudent {
    char masv[50], hoten[50], lop[50];
    float dtoan, dly, dta;
};
typedef struct InforStudent Student;

Student inputStudent() {
    Student s;
    printf("---------NHAP VAO THONG TIN SINH VIEN---------\n");
    printf("Nhap vao ma so sinh vien: "); fflush(stdin); gets(s.masv);
    printf("Nhap vao ho ten sinh vien: "); fflush(stdin); gets(s.hoten);
    printf("Nhap vao lop sinh vien: "); fflush(stdin); gets(s.lop);
    printf("Nhap vao diem toan: "); scanf("%f", &s.dtoan);
    printf("Nhap vao diem ly: "); scanf("%f", &s.dly);
    printf("Nhap vao diem tin hoc: "); scanf("%f", &s.dta);
    return s;
}

void printStudent(Student s) {
    float diemTrungBinh = ((s.dtoan + s.dly + s.dta) / 3);
    printf("%8s %25s %20s %20s %20s %20s %20s\n", "MaSV", "HoTen", "Lop", "DiemToan", "DiemLy", "DiemTinHoc", "DiemTB");
    printf("%3s %25s %20s %20.2f %20.2f %20.2f %20.2f\n", s.masv, s.hoten, s.lop, s.dtoan, s.dly, s.dta, diemTrungBinh);
}

int main() {
    Student s;
    s = inputStudent();
    printf("Giay bao diem so ket hoc ky II, nam hoc 2004-2005\n");
    printStudent(s);
    return 0;
}