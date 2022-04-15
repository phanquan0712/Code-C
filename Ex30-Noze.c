#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void convertToLowerString(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }
}

void printString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[50]; printf("Nhap vao chuoi: "); fflush(stdin); gets(str);
    convertToLowerString(str);
    printf("Chuoi sau khi chuyen thanh chu thuong: "); printString(str);
    printf("\nDao nguoc chuoi: %s\n", strrev(str));
    return 0;
}