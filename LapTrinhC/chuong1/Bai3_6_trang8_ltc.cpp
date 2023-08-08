#include <stdio.h>

int main()
{
    int so, chuSo, tong;

    for (so = 100; so <= 999; so++)
    {
        tong = 0;
        int temp = so;
        while (temp > 0)
        {
            chuSo = temp % 10;
            tong += chuSo * chuSo * chuSo;
            temp /= 10;
        }
        if (tong == so)
        {
            printf("%d\n", so);
        }
    }

    return 0;
}
