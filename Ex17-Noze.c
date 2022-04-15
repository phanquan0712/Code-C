#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int *arr, cntPosInt = 0, cntNegaInt = 0, cntZeroInt = 0;
    arr = (int *)malloc(n * sizeof(int));
    printf("Nhap vao cac phan tu cua mang: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // find max
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] > 0)
        {
            cntPosInt++;
        }
        if (arr[i] < 0)
        {
            cntNegaInt++;
        }
        if (arr[i] == 0)
        {
            cntZeroInt++;
        }
    }
    printf("So luong so duong trong mang: %d\n", cntPosInt);
    printf("So luong so am trong mang: %d\n", cntNegaInt);
    printf("So luong so 0 trong mang: %d\n", cntZeroInt);
    printf("So lon nhat trong mang: %d\n", max);
    return 0;
}