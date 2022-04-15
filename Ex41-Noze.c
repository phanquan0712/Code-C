#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int a, b; printf("Nhap vao 2 so: "); scanf("%d%d", &a, &b);
    char c; printf("Nhap vao phep tinh: ");fflush(stdin);scanf("%c", &c);
    switch(c) {
        case '+': printf("Ket qua: %d\n", a + b); break;
        case '-': printf("Ket qua: %d\n", a - b); break;
        case '*': printf("Ket qua: %d\n", a * b); break;
        case '/': printf("Ket qua: %d\n", a / b); break;
        case '%': printf("Ket qua: %d\n", a % b); break;
        default: printf("Nhap sai phep tinh\n"); break;
    }
    return 0;
}