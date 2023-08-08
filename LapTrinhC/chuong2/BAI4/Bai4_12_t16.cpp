#include <stdio.h>
#include <math.h>

int GT(int k)
{
    if (k == 0 || k == 1)
    {
        return 1;
    }
    else
    {
        return k * GT(k - 1);
    }
}

int main()
{
    int k;
    printf("Nhap vao k: ");
    scanf("%d", &k);
	
    int n;
     printf("Nhap vao n: ");
    scanf("%d", &n);
    int s=0;
    for(k=1;k<=n;k++)
    {
    	s+=GT(k);
	}
    printf("Tong cac giai thua tu 1! den %d! la %d",n,s);
    return 0;
}
