#include "stdio.h"

int main()
{
    int num, sum = 0, count = 0;
    float average;

    while (1) /* while(1) day la dieu kien lap, vi 1 luon dung nen cho vao*/
    {
        printf("Nhap vao mot so nguyen (nhap 0 de ket thuc): ");
        scanf("%d", &num);
        if (num == 0)
        {
            break; // neu nhap 0 thi thoat khoi vong lap
        }
        if (num % 2 == 0)
        {
            sum += num; // neu la so chan, cong vao tong
            count++;    // tang so luong cac so chan da nhap
        }
    }

    if (count != 0)
    {
        average = (float)sum / count; // tinh trung binh cong cac so chan
        printf("Tong cac so chan la: %d\n", sum);
        printf("Trung binh cong cac so chan la: %.2f", average);
    }
    else
    {
        printf("Khong co so chan nao duoc nhap.");
    }

    return 0;
}
