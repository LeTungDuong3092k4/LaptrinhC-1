#include <stdio.h>

int main()
{
    int n, thu_tu_can, thu_tu_chi;
    printf("Nhap vao nam duong lich: ");
    scanf("%d", &n);
    thu_tu_can = n % 10;
    thu_tu_chi = n % 12;
    printf("%d = ", n);
    switch (thu_tu_can)
    {
    case 0:
        printf("Canh ");
        break;
    case 1:
        printf("Tan ");
        break;
    case 2:
        printf("Nham ");
        break;
    case 3:
        printf("Quy ");
        break;
    case 4:
        printf("Giap ");
        break;
    case 5:
        printf("At ");
        break;
    case 6:
        printf("Binh ");
        break;
    case 7:
        printf("Dinh ");
        break;
    case 8:
        printf("Mau ");
        break;
    case 9:
        printf("Ky ");
        break;
    }
    switch (thu_tu_chi)
    {
    case 0:
        printf("Than");
        break;
    case 1:
        printf("Dau");
        break;
    case 2:
        printf("Tuat");
        break;
    case 3:
        printf("Hoi");
        break;
    case 4:
        printf("Ty'");
        break;
    case 5:
        printf("Suu");
        break;
    case 6:
        printf("Dan");
        break;
    case 7:
        printf("Meo");
        break;
    case 8:
        printf("Thin");
        break;
    case 9:
        printf("Ty.");
        break;
    case 10:
        printf("Ngo");
        break;
    case 11:
        printf("Mui");
        break;
    }
    return 0;
}
