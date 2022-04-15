#include <stdio.h>
#include <math.h>

int prime[1000001];
void sieve()
{
    for (int i = 2; i <= 1000000; i++)
    {
        prime[i] = 1;
    }
    for (int i = 2; i <= 1000; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}

int checkPrime(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return n > 1 ? 1 : 0;
}

int main()
{
    sieve();
    int n;
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap vao mang: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = 0;
    printf("Cac so nguyen to : ");
    for (int i = 0; i < n; i++)
    {
        if(prime[a[i]])
        {
            count++;
            printf("%d ", a[i]);
        }
    }
    printf("\nSo phan tu nguyen to: %d", count);
    return 0;
}