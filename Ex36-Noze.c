#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct Circle {
    int dx, dy;
    float radius;
};
typedef struct Circle Circle;

Circle inputCircle() {
    Circle c;
    printf("Nhap vao toa do cua hinh tron: "); scanf("%d%d", &c.dx, &c.dy);
    printf("Nhap vao ban kinh: "); scanf("%f", &c.radius);
    return c;
}

void printAndCalCircle(Circle c) {
    printf("Toa do cua hinh tron: (%d, %d)\n", c.dx, c.dy);
    printf("Ban kinh: %f\n", c.radius);
    printf("Dien tich: %f\n", M_PI * c.radius * c.radius);
    printf("Chu vi: %f\n", 2 * M_PI * c.radius);
}

int main() {
    Circle c;
    c = inputCircle();
    printAndCalCircle(c);
    return 0;
}