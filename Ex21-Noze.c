#include<stdio.h>
#include<string.h>
int main() {
    char str[100]; printf("Nhap vao chuoi: "); fflush(stdin); gets(str);
    int count = 0, length = strlen(str);
    printf("Vi tri cua ky tu 'A' la: ");
    for(int i = 0; i < length; i++) {
        if(str[i] == 'A') {
            count++;
            printf("%d ", i);
        }
    }
    printf("So lan xuat hien cua ky tu 'A' la: %d", count);
    return 0;
}