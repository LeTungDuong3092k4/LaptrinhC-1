#include <stdio.h>
#include <math.h>

int so_nguyen_to(int n);
void so_nho_hon(int n);

int main()
{
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);

    if (so_nguyen_to(n) == 1)
        printf("%d la so nguyen to", n);
    else
        printf("%d khong phai so nguyen to", n);

    so_nho_hon(n);

    return 0;
}
int so_nguyen_to(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void so_nho_hon(int n)
{
    printf("\nCac so nguyen to nho hon %d la: ", n);
    for (int i = 2; i < n; i++)
        if (so_nguyen_to(i) == 1)
            printf("%d ", i);
}
