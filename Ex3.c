#include <stdio.h>
#include <string.h>


int main()
{
    int n;
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", &n);
    float a[n];
    printf("Nhap vao mang: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    float x;
    printf("Nhap vao so can tim: ");
    scanf("%f", &x);
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            if(cnt == 0) {
                printf("Vi tri cac so can tim: ");
            }
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n");
    if(cnt != 0) {
        printf("So phan tu can tim la: %d", cnt);
    }
    else {
        printf("Khong tim thay so can tim!");
    }
    return 0;
}