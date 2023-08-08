#include <stdio.h>

int main()
{
    printf("Cac so nguyen co 3 chu so tong va tich bang nhau la: ");
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                if (i * j * k == i + j + k)
                {
                    printf("%d%d%d\n", i, j, k);
                }
            }
        }
    }

    return 0;
}
