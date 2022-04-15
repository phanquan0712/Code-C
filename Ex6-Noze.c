#include<stdio.h>

int main() {
    char c;printf("Nhap vao ky tu: ");scanf("%c", &c);
    if((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z')) {
        printf("La chu cai!");
    }
    else if(c >= '0' && c <= '9') {
        printf("La so!");
    }
    else {
        printf("La ky tu khac!");
    }
    return 0;
}