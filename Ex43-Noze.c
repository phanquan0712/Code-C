#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main() {
    int month, year; printf("Nhap vao thang va nam: "); scanf("%d%d", &month, &year);
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d nam %d co 31 ngay\n", month, year);
            break;
        case 2: 
            if(checkYear(year)) {
                printf("Thang %d nam %d co 29 ngay\n", month, year);
            }
            else {
                printf("Thang %d nam %d co 28 ngay\n", month, year);
            }
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d nam %d co 30 ngay\n", month, year);
            break;
        default: 
            printf("Thang %d nam %d khong hop le\n", month, year);
            break;
    }
    return 0;
}