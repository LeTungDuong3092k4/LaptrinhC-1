#include <stdio.h>

int Fibo(int n)
{
   if(n==0||n==1)
   {
   		return 1;
   }
   else
   {
   		return Fibo(n-1)+Fibo(n-2);
   }
}

int main()
{
    int n, i;
	do{
    printf("Nhap so n: ");
    scanf("%d", &n);
	}while(n<2);
    printf("Day so Fibonacci voi %d phan tu la: ", n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", Fibo(i));
    }

    return 0;
}
