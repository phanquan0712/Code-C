#include<stdio.h>
#include<string.h>


int main() {
    char name[100];printf("Nhap vao ten: "); fflush(stdin); gets(name);
    int idxElectrix; printf("Nhap vao s dien: "); scanf("%d", &idxElectrix);
    int sumMoney = (idxElectrix > 100) ? (idxElectrix - 100) * 1000 + 100 * 500 : idxElectrix * 500;
    printf("So tien phai tra la: %d", sumMoney);
    printf("\nTen cua ban la: %s", name);
    return 0;
}