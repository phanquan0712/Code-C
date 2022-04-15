#include<stdio.h>
#include<string.h>

int checkStringSymmetry(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while(i <= j) {
        if(str[i] != str[j]) return 0;
        i++;j--;
    }
    return 1;
}

int main() {
    char str[100]; printf("Nhap vao chuoi: ");fflush(stdin); gets(str);
    int cnt = checkStringSymmetry(str);
    if(cnt == 0) {
        printf("Chuoi: %s khong la chuoi doi xung", str);
    }
    else {
        printf("Chuoi doi xung!");
    }
    return 0;
}