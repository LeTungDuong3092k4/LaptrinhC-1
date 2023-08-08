#include <stdio.h>
#include <math.h>

int kiem_tra_so_nguyento(int k)
{
    if (k < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void in_songuyento(int m, int n)
{
    for (int i = m; i <= n; i++)
    {
        if (kiem_tra_so_nguyento(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int m, n;
    do
    {
  	  printf("Nhap m: ");
  	  scanf("%d", &m);
  	  printf("Nhap n: ");
  	  scanf("%d", &n);	
	}while(m>=n);

    printf("Cac so nguyen to trong doan [%d, %d] la: ", m, n);
    in_songuyento(m, n);
    return 0;
}
