#include "stdio.h"
int ucln(int ,int);
int ucln(int a,int b)
{
	if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        if (a >= b)
        {
            return ucln(a - b, b);
        }
        else
        {
            return ucln(a, b - a);
        }
    }
}

int main()
{
	int a, b;
	do
	{
	   printf(">> Nhap vao so a: ");
 	   scanf("%d", &a);
 	   printf(">> Nhap vao so b: ");
 	   scanf("%d", &b);
	}while(a<0||b<0);
	ucln(a,b);
	printf("Ucln la %d",ucln(a,b));
	return 0;
}

