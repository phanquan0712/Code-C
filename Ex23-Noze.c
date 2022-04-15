#include<stdio.h>
#include<string.h>
int main() {
    float a, b;printf("Nhap vao 2 so: "); scanf("%f%f", &a, &b);
    char c;printf("Nhap vao phep tinh: ");fflush(stdin); scanf("%c", &c);
    switch (c) {
        case '+': printf("%f + %f = %f", a, b, a + b); break;
        case '-': printf("%f - %f = %f", a, b, a - b); break;
        case '*': printf("%f * %f = %f", a, b, a * b); break;
        case '/': printf("%f / %f = %f", a, b, a / b); break;
        default: printf("Phep tinh khong hop le");
    }
    return 0;
}