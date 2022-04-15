#include<stdio.h>


int main() {
    int width;printf("Nhap vao chieu rong: "); scanf("%d", &width);
    int length = 2 * width;
    int Area = width * length;
    int Perimeter = 2 * width + 2 * length;
    printf("Area: %d\n", Area);
    printf("Perimeter: %d\n", Perimeter);
    return 0;
}