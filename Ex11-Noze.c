#include<stdio.h>
#include<string.h>

int checkStringSymmetry(char str[]) {
    int cnt = 0;
    int i = 0, j = strlen(str) - 1;
    while(i <= j) {
        if(str[i] == str[j]) {
            cnt++;
            i++; j--;
        }
        else {
            return 0;
        }
    }
    return cnt;
}



int main() {
    char str[100]; printf("Nhap vao chuoi: ");fflush(stdin); gets(str);
    int cnt = checkStringSymmetry(str);
    if(cnt != 0) {
        printf("Tong cac ki tu giong nhau trong chuoi la: %d", cnt - 1);
    }
    else {
        printf("Sau khi dao nguoc   : %s", strrev(str));
    }
    return 0;
}