#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int gcd(int a,int  b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int LCM(int a,int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a, b, c, d;printf("Nhap vao so a, b, c, d: ");scanf("%d%d%d%d", &a, &b, &c, &d);
    int res = gcd(gcd(a, b), gcd(c, d));
    printf("GCD(%d, %d, %d, %d) = %d\n", a, b, c, d, res);
    int lcm = LCM(LCM(a, b), LCM(c, d));
    printf("LCM(%d, %d, %d, %d) = %d\n", a, b, c, d, lcm);
    return 0;
}