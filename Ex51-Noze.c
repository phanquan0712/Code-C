#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>


int main() {
    char str[50]; printf("Nhap vao chuoi: "); fflush(stdin), gets(str);
    char c; printf("Nhap vao 1 ki tu: "); fflush(stdin), scanf("%c", &c);
    bool isExist = false;
    int length = strlen(str), idx;
    for(int i = 0; i < length; i++) {
        if(str[i] == c) {
            isExist = true;
            idx = i;
            break;
        }
    }
    if(isExist) {
        printf("%c xuat hien dau tien tai vi tri %d", c, idx);
    } else {
        printf("%c khong xuat hien trong chuoi", c);
    }
    return 0;
}