#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct Rectangle {
    int length, width, area, perimeter;
};
typedef struct Rectangle Rectangle;

Rectangle inputRectangle() {
    Rectangle r;
    printf("Nhap chieu dai: "); scanf("%d", &r.length);
    printf("Nhap chieu rong: "); scanf("%d", &r.width);
    r.area = r.length * r.width;
    r.perimeter = (r.length + r.width) * 2;
    return r;
}

void printRectangle(Rectangle r) {
    printf("Chieu dai: %d\n", r.length);
    printf("Chieu rong: %d\n", r.width);
    printf("Dien tich: %d\n", r.area);
    printf("Chu vi: %d\n", r.perimeter);
}

int main() {
    Rectangle r;
    r = inputRectangle();
    printRectangle(r);
    return 0;
}