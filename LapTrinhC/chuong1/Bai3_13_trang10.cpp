#include <stdio.h>
int main()
{
    int num, sum = 0;
    while (sum <= 100)
    {
        printf("Nhap vao mot so nguyen: ");
        scanf("%d", &num);
        sum += num;
        printf("hien tai tong=%d\n",sum);
    }

    printf("Tong cac so la: %d", sum);
    return 0;
}
