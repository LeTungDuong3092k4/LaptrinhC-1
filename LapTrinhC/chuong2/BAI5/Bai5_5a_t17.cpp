#include <stdio.h>
double power(double,float);
double power(double a, float n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, n - 1);
	}
}

int main()
{
    double a;
    float n;

    printf("Nhap a: ");
    scanf("%lf", &a);
    printf("Nhap n: ");
    scanf("%f", &n);

    printf("%lf^%f = %lf", a, n, power(a, n));

    return 0;
}
