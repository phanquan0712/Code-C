#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void arrangeString(char str[]) {
    int i, j;
    char k;
    for (i = 0; i < strlen(str); i++) {
        for (j = i + 1; j < strlen(str); j++) {
            if (str[i] > str[j]) {
                k = str[i];
                str[i] = str[j];
                str[j] = k;
            }
        }
    }
}

int cntExist(char str[], char c) {
    int i, cnt = 0, length = strlen(str);
    for (i = 0; i < length; i++) {
        if (str[i] == c) cnt++;
    }
    return cnt;
}

int main() {
    char str[100]; printf("Nhap vao chuoi: ");fflush(stdin); scanf("%s", str);
    arrangeString(str);
    printf("Chuoi sau khi sap xep: %s\n", str);
    printf("So ky tu %c trong chuoi: %d\n",'e', cntExist(str, 'e'));
    return 0;
}